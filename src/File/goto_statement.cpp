// Headers
#include  "File.hpp"


void File::goto_statement(Sti_t &i)
{
    String_t &jumpto(m_instructions[++i]);
    for (Sti_t p = 0; p < m_instructions.size(); ++p)
    {
        if (m_instructions[p] == ":" + jumpto && m_instructions[p - 1] != "goto")
        {
            i = p;
            return;
        }
    }
}
