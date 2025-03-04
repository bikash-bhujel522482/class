library ieee;
use ieee.std_logic_1164.all;

entity and1 is
    port(
        a, b : in std_logic;
        c    : out std_logic
    );
end entity and1;

architecture arc_andgate of and1 is
begin
    c <= a and b;
end architecture arc_andgate;
