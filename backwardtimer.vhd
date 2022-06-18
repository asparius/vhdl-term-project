----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:36:24 05/23/2022 
-- Design Name: 
-- Module Name:    backwardtimer - Behavioral 
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
use ieee.numeric_std.all;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity backwardtimer is
	generic(clockfrequency: integer := 50);-- bound for tick counter	
	Port( nrst: in std_logic; --nrst for resetting clock whenever an mode is not chosen
			mode: in std_logic_vector(2 downto 0); -- mode to clock correct seconds and minutes
			clk: in std_logic;--100 hz clock
			second0: inout std_logic_vector(3 downto 0);-- between 0 and 9
			second1: inout std_logic_vector(3 downto 0);-- between 0 and 5
			minute0: inout std_logic_vector(3 downto 0);-- between 0 and 9
			minute1: inout std_logic_vector(3 downto 0));-- between 0 and 9

end backwardtimer;

architecture Behavioral of backwardtimer is

signal ticks:integer;
signal min: integer;
signal sec: integer;

begin




		
process(clk) is
begin
	--resetting timer given the mode, else starts timer
	if rising_edge(clk) then
		if(nrst = '0') then
			case mode is
				when "001" =>
					second0 <= "0101";
					second1 <= "0001";
					minute0 <= "0000";
					minute1 <= "0000";
					
		
				when "010" => 
					second0 <= "0000";
					second1 <= "0011";
					minute0 <= "0000";
					minute1 <= "0000";
		
				when "011" =>
					second0 <= "0000";
					second1 <= "0000";
					minute0 <= "0001";
					minute1 <= "0000";		
				when "100" =>
					second0 <= "0000";
					second1 <= "0011";
					minute0 <= "0001";
					minute1 <= "0000";
					
				when "000" =>
					second0 <= "0000";
					second1 <= "0000";
					minute0 <= "0000";
					minute1 <= "0000";
				
				
				when others =>
					second0 <= "0000";
					second1 <= "0000";
					minute0 <= "0000";
					minute1 <= "0000";
			end case;

		
		
			ticks <= 0;
			
		else
			
			
			
			
			
			
			if ticks = clockfrequency -1 then -- 1 second is 50 ticks(100 hz clock), updates everyting accordingly
				ticks <= 0;
				
				if( second0 = 0) then 
					if(second1 = 0) then
						if(minute0= 0) then
							if(minute1 = 0) then
								--condition for stopping clock when it reaches 00:00
								second0 <= "0000";
								second1 <= "0000";
								minute0 <= "0000";
								minute1 <= "0000";
	
								
							else
								--borrowing 10 minutes
								minute0 <= "1001";
								minute1 <= minute1 -1;
							end if;
						else
							--borrowing 1 minute
							minute0 <= minute0 -1;
							second1 <= "0101";
							second0 <= "1001";
						end if;
					else
						--borrowing 10 seconds
						second1 <= second1 -1;
						second0 <= "1001";
					end if;
				else
				second0 <= second0 - 1;
											
										
				end if;
			else
				ticks <= ticks + 1;
			end if;
		end if;
	end if;
	
end process;
			
			

	
		




end Behavioral;


