#include "digger_music.h"

const uint8_t music0[][2] = { // Музыка для режима "Бонус"
    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { F4,NQ }, { G4,NQ }, { A4,NQ },
    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { F4,NE }, { A4,NE }, { G4,NQ }, { E4,NQ }, { C4,NQ },
    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { F4,NQ }, { G4,NQ }, { A4,NQ },
    { F4,NE }, { A4,NE }, { C5,N10 }, { AS4,NE }, { A4,NE }, { G4,NE }, { F4,NQ }, { A4,NQ}, { F4,NQ},

    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { F4,NQ }, { G4,NQ }, { A4,NQ },
    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { F4,NE }, { A4,NE }, { G4,NQ }, { E4,NQ }, { C4,NQ },
    { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { C4,NQ }, { C4,NE }, { C4,NE }, { F4,NQ }, { G4,NQ }, { A4,NQ },
    { F4,NE }, { A4,NE }, { C5,N10 }, { AS4,NE }, { A4,NE }, { G4,NE }, { F4,NQ }, { A4,NQ }, { F4,NQ },

    { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ },
    { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { G4,NQ }, { F4,NQ }, { E4,NQ }, { D4,NQ },
    { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ },
    { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { D5,NQ }, { C5,NQ }, { B4,NQ }, { C5,NQ }, { B4,NQ }, { C5,NQ },

    { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ },
    { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { G4,NQ }, { F4,NQ }, { E4,NQ }, { D4,NQ },
    { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ }, { A4,NE }, { A4,NE }, { A4,NQ },
    { D5,NQ }, { A4,NQ }, { D5,NQ }, { A4,NQ }, { D5,NQ }, { C5,NQ }, { B4,NQ }, { C5,NQ }, { B4,NQ }, { C5,NQ },
    { 0, 0 }
};

const uint8_t music1[][2] = { // Обычная музыка "Popcorn"
    { D4,NE }, { C4,NE },
    { D4,NE }, { A3,NE }, { F3,NE }, { A3,NE }, { D3,NQ }, { D4,NE }, { C4,NE },
    { D4,NE }, { A3,NE }, { F3,NE }, { A3,NE }, { D3,NQ }, { D4,NE }, { E4,NE },
    { F4,NE }, { E4,NE }, { F4,NE }, { D4,NE }, { E4,NE }, { D4,NE }, { E4,NE }, { C4,NE },
    { D4,NE }, { C4,NE }, { D4,NE }, { AS3,NE }, { D4,NQ }, { D4,NE }, { C4,NE },

    { D4,NE }, { A3,NE }, { F3,NE }, { A3,NE }, { D3,NQ }, { D4,NE }, { C4,NE },
    { D4,NE }, { A3,NE }, { F3,NE }, { A3,NE }, { D3,NQ }, { D4,NE }, { E4,NE },
    { F4,NE }, { E4,NE }, { F4,NE }, { D4,NE }, { E4,NE }, { D4,NE }, { E4,NE }, { C4,NE },
    { D4,NE }, { C4,NE }, { D4,NE }, { E4,NE }, { F4,NQ }, { A4,NE }, { G4,NE },

    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { G4,NE },
    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { B4,NE },
    { C5,NE }, { B4,NE }, { C5,NE }, { A4,NE }, { B4,NE }, { A4,NE }, { B4,NE }, { G4,NE },
    { A4,NE }, { G4,NE }, { A4,NE }, { F4,NE }, { A4,NQ }, { A4,NE }, { G4,NE },

    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { G4,NE },
    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { B4,NE },
    { C5,NE }, { B4,NE }, { C5,NE }, { A4,NE }, { B4,NE }, { A4,NE }, { B4,NE }, { G4,NE },
    { A4,NE }, { G4,NE }, { A4,NE }, { F4,NE }, { A4,NQ }, { D5,NE }, { C5,NE },

    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { G4,NE },
    { A4,NE }, { F4,NE }, { C4,NE }, { F4,NE }, { A3,NQ }, { A4,NE }, { B4,NE },
    { C5,NE }, { B4,NE }, { C5,NE }, { A4,NE }, { B4,NE }, { A4,NE }, { B4,NE }, { G4,NE },
    { A4,NE }, { G4,NE }, { F4,NE }, { G4,NE }, { A4,NQ },
    { 0, 0 }
};

const uint8_t music2[][2] = { // Траурный марш
    { REST,NE }, { C4,N6 }, { C4,NQ }, { C4,NE }, { C4,N6 }, { DS4,NQ }, { D4,NE }, { D4,NQ }, { C4,NE }, { C4,NQ }, { B3,NE }, { C4,N12 },
    { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW }, { REST,NW },
    { 0, 0 }
};

void init_music(uint8_t x)
{
/*
    switch (x)
    {
        case 0: music_ptr = (uint16_t *)music0; break;
        case 1: music_ptr = (uint16_t *)music1; break;
        case 2: music_ptr = (uint16_t *)music2; break;
    }
*/

    // switch(m_type) {
    // case 0: /* chase music */
    //         attack_level=50;
    //         attack_rate=20;
    //         hold_level=20;
    //         hold_rate=10;
    //         decay_rate=4;
    //         break;
    // case 1: /* normal man movement music */
    //         attack_level=50;
    //         attack_rate=50;
    //         hold_level=8;
    //         hold_rate=15;
    //         decay_rate=1;
    //         break;
    // case 2: /* man death music */
    //         attack_level=50;
    //         attack_rate=50;
    //         hold_level=25;
    //         hold_rate=5;
    //         decay_rate=1;
    //         break;
    // }
    //
    // m_stat=TRUE;
    //
    // if (x==2) /* death march */
    //     rst_dead();     /* turn off dead sound */
}

void play_music(const uint8_t *music_ptr, uint8_t  **cur_ptr)
{
    asm volatile (
        "mov %[cur_ptr], r3\n\t"    // r3 = &cur_ptr
        "mov (r3), r4\n\t"          // r4 = cur_ptr
        "bne .l1_%=\n\t"
".l0_%=:\n\t"
        "mov %[music_ptr], r4\n\t"  // r4 = music_ptr
        "mov r4, (r3)\n\t"          // cur_ptr = music_ptr
".l1_%=:\n\t"
        "movb (r4)+, r2\n\t"         // r2 = period
        "beq .l0_%=\n\t"
        "movb (r4)+, r1\n\t"         // r1 = durance
        "mov $7, r0\n\t"
".l1_1_%=:\n\t"
        "asl r1\n\t"
        "sob r0, .l1_1_%=\n\t"
        "mov r4, (r3)\n\t"          // cur_ptr += 2
        "clr r0\n\t"
".l2_%=:\n\t"
        "cmp r2, $-1\n\t"
        "beq .l3_%=\n\t"
        "mov $0100, r3\n\t"
        "xor r3, r0\n\t"
        "movb r0, @$-062\n"
".l3_%=:\n\t"
        "bic $0xFF00, r2\n\t"
        "mov r2, r3\n"

        "bit $0100, r0\n\t"
        "beq .l4_%=\n\t"
        "asr r3\n\t"
        "asr r3\n\t"
        "asr r3\n\t"
        "br .l5_%=\n\t"
".l4_%=:\n\t"
        "asl r3\n\t"
        "asl r3\n\t"
        "asl r3\n\t"

".l5_%=:\n\t"
        "nop\n\t"
        "sob r3, .l5_%=\n\t"
        "sub r2, r1\n\t"
        "bpl .l2_%=\n\t"
        : [cur_ptr]"=m" (cur_ptr)
        : [music_ptr]"m" (music_ptr)
        : "r0", "r1", "r2", "r3", "r4", "cc", "memory"
    );
}
