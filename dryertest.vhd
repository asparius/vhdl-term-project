--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:45:53 05/24/2022
-- Design Name:   
-- Module Name:   C:/Users/ocaga/elec204/termproject/dryertest.vhd
-- Project Name:  termproject
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: dryer
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY dryertest IS
END dryertest;
 
ARCHITECTURE behavior OF dryertest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT dryer
    PORT(
         rst : IN  std_logic;
         stp : IN  std_logic;
         change : IN  std_logic;
         sel : IN  std_logic;
         clk : IN  std_logic;
         curr_state : OUT  std_logic_vector(3 downto 0);
         mode : INOUT  std_logic_vector(3 downto 0);
         second0_out : OUT  std_logic_vector(3 downto 0);
         second1_out : OUT  std_logic_vector(3 downto 0);
         minute0_out : OUT  std_logic_vector(3 downto 0);
         minute1_out : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rst : std_logic := '0';
   signal stp : std_logic := '0';
   signal change : std_logic := '0';
   signal sel : std_logic := '0';
   signal clk : std_logic := '0';

	--BiDirs
   signal mode : std_logic_vector(3 downto 0);

 	--Outputs
   signal curr_state : std_logic_vector(3 downto 0);
   signal second0_out : std_logic_vector(3 downto 0);
   signal second1_out : std_logic_vector(3 downto 0);
   signal minute0_out : std_logic_vector(3 downto 0);
   signal minute1_out : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: dryer PORT MAP (
          rst => rst,
          stp => stp,
          change => change,
          sel => sel,
          clk => clk,
          curr_state => curr_state,
          mode => mode,
          second0_out => second0_out,
          second1_out => second1_out,
          minute0_out => minute0_out,
          minute1_out => minute1_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 20 ns;	
		rst <= '1';
      wait for 20 ms;
		rst <= '0';
		change <= '1';
		sel <= '0';
		
		wait for 20 ms;
		change <= '0';
		sel <= '0';
		
		wait for 20 ms;
		change <= '0';
		sel <= '1';
		
		wait for 2000 ms;
		stp <= '1';
		change <= '0';
		sel <= '0';
		
		wait for 20 ms;
		change <= '0';
		sel <= '0';
		stp <= '0';
		wait for 40 ms;
		change <= '1';
		sel <= '0';
		wait for 40 ms;
		change <= '0';
		sel <= '0';
		
		wait for 40 ms;
		change <= '1';
		sel <= '0';
		wait for 40 ms;
		change <= '0';
		sel <= '0';
		
		
	
      -- insert stimulus here 

      wait;
   end process;

END;
