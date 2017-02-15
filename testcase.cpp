#include <iostream>
#include <limits>

struct VariableGroupBlock
{

    struct BlockReference
    {
        std::uint32_t offset;
        std::uint32_t descriptor;
    };

    VariableGroupBlock() {}

    std::size_t max() const {
        return std::numeric_limits<decltype(BlockReference::offset)>::max();
    }
};

int main() {

    VariableGroupBlock bg;
    std::clog << bg.max() << "\n";
    
}

