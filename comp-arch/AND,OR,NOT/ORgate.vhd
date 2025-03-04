
library ieee;
use ieee.std_logic_1164.all;

entity or1 is
    port(
        a, b : in bit;
        c    : out bit
    );
end entity or1;

architecture arc_orgate of or1 is
begin
    c <= a or b;
end architecture arc_orgate;
