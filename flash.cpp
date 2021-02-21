#include "flash.h"

FLASH_1::FLASH_1() : PatchSet(std::vector<std::string> ({"FLASH_V120", "FLASH_V121"}))
{

    addPatch(std::vector<unsigned char> {(0x90),(0xb5),(0x93),(0xb0),(0x6f),(0x46),(0x39),(0x1d),
                                         (0x08),(0x1c),(0x00),(0xf0)},
             std::vector<unsigned char> {(0x00),(0xb5),(0x3d),(0x20),(0x00),(0x02),(0x1f),(0x21),
                                         (0x08),(0x43),(0x02),(0xbc),(0x08),(0x47)});
    addPatch(std::vector<unsigned char> {(0x80),(0xb5),(0x94),(0xb0),(0x6f),(0x46),(0x39),(0x1c),
                                         (0x08),(0x80),(0x38),(0x1c),(0x01),(0x88),(0x0f),(0x29),
                                         (0x04),(0xd9),(0x01),(0x48),(0x56),(0xe0),(0x00),(0x00),
                                         (0xff),(0x80),(0x00),(0x00),(0x23),(0x48),(0x23),(0x49),
                                         (0x0a),(0x88),(0x23)},
             std::vector<unsigned char> {(0x7c),(0xb5),(0x00),(0x07),(0x00),(0x0c),(0xe0),(0x21),
                                         (0x09),(0x05),(0x09),(0x18),(0x01),(0x23),(0x1b),(0x03),
                                         (0xff),(0x20),(0x08),(0x70),(0x01),(0x3b),(0x01),(0x31),
                                         (0x00),(0x2b),(0xfa),(0xd1),(0x00),(0x20),(0x7c),(0xbc),
                                         (0x02),(0xbc),(0x08),(0x47)});
    addPatch(std::vector<unsigned char> {(0x80),(0xb5),(0x94),(0xb0),(0x6f),(0x46),(0x79),(0x60),
                                         (0x39),(0x1c),(0x08),(0x80),(0x38),(0x1c),(0x01),(0x88),
                                         (0x0f),(0x29),(0x03),(0xd9),(0x00),(0x48),(0x73),(0xe0),
                                         (0xff),(0x80),(0x00),(0x00),(0x38),(0x1c),(0x01),(0x88)},
             std::vector<unsigned char> {(0x7c),(0xb5),(0x90),(0xb0),(0x00),(0x03),(0x0a),(0x1c),
                                         (0xe0),(0x21),(0x09),(0x05),(0x09),(0x18),(0x01),(0x23),
                                         (0x1b),(0x03),(0x10),(0x78),(0x08),(0x70),(0x01),(0x3b),
                                         (0x01),(0x32),(0x01),(0x31),(0x00),(0x2b),(0xf8),(0xd1),
                                         (0x00),(0x20),(0x10),(0xb0),(0x7c),(0xbc),(0x08),(0xbc),
                                         (0x08),(0x47)});
}

FLASH_2::FLASH_2() : PatchSet(std::vector<std::string> ({"FLASH_V123", "FLASH_V124"}))
{
    addPatch(std::vector<unsigned char> {(0xff),(0xf7),(0xaa),(0xff),(0x00),(0x04),(0x03),(0x0c)},
             std::vector<unsigned char> {(0x1b),(0x23),(0x1b),(0x02),(0x32),(0x20),(0x03),(0x43)});

    addPatch(std::vector<unsigned char> {(0x70),(0xb5),(0x90),(0xb0),(0x15),(0x4d)},
             std::vector<unsigned char> {(0x00),(0x20),(0x70),(0x47),(0x15),(0x4d)});

    addPatch(std::vector<unsigned char> {(0x70),(0xb5),(0x46),(0x46),(0x40),(0xb4),(0x90),(0xb0),
                                         (0x00)},
             std::vector<unsigned char> {(0x00),(0x20),(0x70),(0x47),(0x40),(0xb4),(0x90),(0xb0),
                                         (0x00)});
    addPatch(std::vector<unsigned char> {(0xf0),(0xb5),(0x90),(0xb0),(0x0f),(0x1c),(0x00),(0x04),
                                         (0x04),(0x0c),(0x0f),(0x2c),(0x04),(0xd9),(0x01),(0x48),
                                         (0x40),(0xe0),(0x00),(0x00),(0xff),(0x80),(0x00),(0x00),
                                         (0x20),(0x1c),(0xff),(0xf7),(0xd7),(0xfe),(0x00),(0x04),
                                         (0x05),(0x0c),(0x00),(0x2d),(0x35),(0xd1)},
             std::vector<unsigned char> {(0x70),(0xb5),(0x00),(0x03),(0x0a),(0x1c),(0xe0),(0x21),
                                         (0x09),(0x05),(0x41),(0x18),(0x01),(0x23),(0x1b),(0x03),
                                         (0x10),(0x78),(0x08),(0x70),(0x01),(0x3b),(0x01),(0x32),
                                         (0x01),(0x31),(0x00),(0x2b),(0xf8),(0xd1),(0x00),(0x20),
                                         (0x70),(0xbc),(0x02),(0xbc),(0x08),(0x47)});
}

FLASH_3::FLASH_3() : PatchSet(std::vector<std::string> ({"FLASH_V125", "FLASH_V126"}))
{
    addPatch(std::vector<unsigned char> {(0xff),(0xf7),(0xaa),(0xff),(0x00),(0x04),(0x03),(0x0c),},
             std::vector<unsigned char> {(0x1b),(0x23),(0x1b),(0x02),(0x32),(0x20),(0x03),(0x43)});
    addPatch(std::vector<unsigned char> {(0x70),(0xb5),(0x90),(0xb0),(0x15),(0x4d)},
             std::vector<unsigned char> {(0x00),(0x20),(0x70),(0x47),(0x15),(0x4d)});


    addPatch(std::vector<unsigned char> {(0x70),(0xb5),(0x46),(0x46),(0x40),(0xb4),(0x90),(0xb0),
                                         (0x00),},
             std::vector<unsigned char> {(0x00),(0x20),(0x70),(0x47),(0x40),(0xb4),(0x90),(0xb0),
                                         (0x00)});

    addPatch(std::vector<unsigned char> {(0xf0),(0xb5),(0x90),(0xb0),(0x0f),(0x1c),(0x00),(0x04),
                                         (0x04),(0x0c),(0x0f),(0x2c),(0x04),(0xd9),(0x01),(0x48),
                                         (0x40),(0xe0),(0x00),(0x00),(0xff),(0x80),(0x00),(0x00),
                                         (0x20),(0x1c),(0xff),(0xf7),(0xd7),(0xfe),(0x00),(0x04),
                                         (0x05),(0x0c),(0x00),(0x2d),(0x35),(0xd1)},
             std::vector<unsigned char> {(0x70),(0xb5),(0x00),(0x03),(0x0a),(0x1c),(0xe0),(0x21),
                                         (0x09),(0x05),(0x41),(0x18),(0x01),(0x23),(0x1b),(0x03),
                                         (0x10),(0x78),(0x08),(0x70),(0x01),(0x3b),(0x01),(0x32),
                                         (0x01),(0x31),(0x00),(0x2b),(0xf8),(0xd1),(0x00),(0x20),
                                         (0x70),(0xbc),(0x02),(0xbc),(0x08),(0x47)});
}