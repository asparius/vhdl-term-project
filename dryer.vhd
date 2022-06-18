----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:30:34 05/22/2022 
-- Design Name: 
-- Module Name:    dryer - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;              
use ieee.std_logic_unsigned.all;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity dryer is
	Port( rst: in std_logic; -- rst 
			stp: in std_logic; -- exits when a wrong program is chosen
			change :in std_logic; -- switch between modes
			sel: in std_logic; -- selects mode
			clk: in std_logic;--100  hz clock
			curr_state: out std_logic_vector(3 downto 0);-- displaying current program
			mode: inout std_logic_vector(3 downto 0);-- displaying chosen program
			second0_out: out std_logic_vector(3 downto 0);
			second1_out: out std_logic_vector(3 downto 0);
			minute0_out: out std_logic_vector(3 downto 0);
			minute1_out: out std_logic_vector(3 downto 0)
			);
end dryer;



architecture Behavioral of dryer is

signal time_mode: std_logic_vector(2 downto 0); -- to change timer given the selected program
--intemediate signal for outputting remaining time of a process;
signal second0: std_logic_vector(3 downto 0);
signal second1: std_logic_vector(3 downto 0);
signal minute0: std_logic_vector(3 downto 0);
signal minute1: std_logic_vector(3 downto 0);

signal new_clk: std_logic;--to generate 100 hz clock

signal inst: std_logic := '0';-- to avoid reinstantiating of timer

signal state: std_logic_vector(3 downto 0);-- state signal to swithc between programs
-- constant states corresponding to dryer's programs
constant  air: std_logic_vector(3 downto 0):= "0001";
constant gentle: std_logic_vector(3 downto 0):= "0010";
constant  cotton: std_logic_vector(3 downto 0):= "0100";
constant press: std_logic_vector(3 downto 0):= "1000";
--none case when mode is not selected
constant none: std_logic_vector(3 downto 0):= "0000";
-- component declaration of timer and clk
Component clk_divider is
	Port( MCLK: in std_logic;
			clk_out: out std_logic);
end component;

Component backwardtimer is
	
	Port( nrst: in std_logic;
			mode: in std_logic_vector(2 downto 0);
			clk: in std_logic;
			second0: inout std_logic_vector(3 downto 0);
			second1: inout std_logic_vector(3 downto 0);
			minute0: inout std_logic_vector(3 downto 0);
			minute1: inout std_logic_vector(3 downto 0));

end component;



begin
-- port maps of above components

clk_generator: clk_divider Port Map(clk,new_clk);
timer: backwardtimer Port Map(inst, time_mode, new_clk,second0,second1,minute0,minute1); 							 




process(rst,new_clk,change,sel,mode,time_mode,inst,state,second0,second1,minute0,minute1)--sensitivity list
begin
 							 


if(rst = '1') then -- rst state for sequential circuit, initializing signals
	time_mode <= "001";
	state <= air;
	curr_state <= state;
	mode <= none;
else
	if rising_edge(new_clk) then -- allows us to use pos edge triggered flip-flop
		--uses case when to map states to next states and updates signal accordingly
		-- only air case is commented since every case works in similar manner
		case state is
				when air =>
					-- to switch current prgogram
					if(change = '1' and sel = '0' and mode = none) then
							state <= gentle; -- changing current state
							time_mode <= "010"; --changing time mode
							inst <= '0';--keeping it to 0 for reinstantiation of timer
							--mode has to be none to go to the next state
						
						
					
					elsif( change = '0' and sel ='1' and mode = none) then
						
						mode <= state;-- selects mode given state
						inst <= '1';-- puts timer in else condition and starts timer
						
					
					elsif( stp = '1') then --stops everything regardless of any condition, its aim to exit the incorrect mode
						mode <= none; 
						time_mode <= "000";
						inst <= '0';
					end if;
			--everything below in case do same operations
			-- state is updated at the end of the case
			--timers output values are given when the process is finished
				when gentle =>
					if(change = '1' and sel = '0' and mode = none) then
							state <= cotton;
							time_mode <= "011";
							inst <= '0';

						
					
					elsif( change = '0' and sel ='1' and mode = none) then
						mode <= state;
						inst <= '1';
					elsif(stp = '1') then
						mode <= none;
						time_mode <= "000";
						inst <= '0';

					end if;
					
				when cotton =>
					if(change = '1' and sel = '0' and mode = none) then
							state <= press;
							time_mode <= "100";
							inst <= '0';

					
					elsif( change = '0' and sel = '1' and mode = none) then
						mode <= state;
						inst <= '1';
					elsif( stp = '1') then
						mode <= none;
						time_mode <= "000";
						inst <= '0';

							
					end if;
					
					
				when press =>
					if(change = '1' and sel = '0' and mode = none ) then
						state <= air;
						time_mode <= "001";
						inst <= '0';

					elsif( change = '0' and sel ='1' and mode = none) then
						mode <= state;
						inst <= '1';
					elsif( stp = '1') then
						mode <= none;
						time_mode <= "000";
						inst <= '0';

					end if;
				when others =>
					state <= none;
					mode <= none;
					curr_state <= none;
					inst <= '0';

			end case;
		curr_state <= state;
					
	end if;
end if;

second0_out <= second0;
second1_out <= second1;
minute0_out <= minute0;
minute1_out <= minute1;
end process;





end Behavioral;

