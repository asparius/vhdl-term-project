----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:50:02 05/23/2022 
-- Design Name: 
-- Module Name:    clk_divider - Behavioral 
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
USE IEEE.STD_LOGIC_ARITH.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity clk_divider is
	Port( MCLK: in std_logic;
			clk_out: out std_logic);
end entity;

architecture Behavioral of clk_divider is

signal new_clock_out:std_logic := '0';
SIGNAL COUNTER : STD_LOGIC_VECTOR(18 DOWNTO 0) := "0000000000000000000";
signal count: integer:= 0;
begin
CLK_PROCESS: PROCESS(MCLK,new_clock_out)

BEGIN
-- 100 hz clock counter given the 50 mhz clock.


	--INCREMENT COUNTER
	IF rising_edge(MCLK) THEN
		COUNT <= COUNT + 1;
	IF( COUNT = 500000  -1) THEN
		new_clock_out <= not new_clock_out;
		COUNT <= 0;
	END IF;
	END IF;
	clk_out <= new_clock_out;
END PROCESS;





end Behavioral;


