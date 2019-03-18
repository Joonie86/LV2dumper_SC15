

#define lv2syscall0_sc10_15(syscall, a8)                                                     \
        register u64 p1 asm("3");                                                \
        register u64 p2 asm("4");                                                \
        register u64 p3 asm("5");                                                \
        register u64 p4 asm("6");                                                \
        register u64 p5 asm("7");                                                \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall1_sc10_15(syscall,a1, a8)                                                  \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4");                                                \
        register u64 p3 asm("5");                                                \
        register u64 p4 asm("6");                                                \
        register u64 p5 asm("7");                                                \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall2_sc10_15(syscall,a1,a2, a8)                                               \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5");                                                \
        register u64 p4 asm("6");                                                \
        register u64 p5 asm("7");                                                \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10"); = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall3_sc10_15(syscall,a1,a2,a3, a8)                                            \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5") = (a3);                                         \
        register u64 p4 asm("6");                                                \
        register u64 p5 asm("7");                                                \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall4_sc10_15(syscall,a1,a2,a3,a4, a8)                                         \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5") = (a3);                                         \
        register u64 p4 asm("6") = (a4);                                         \
        register u64 p5 asm("7");                                                \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall5_sc10_15(syscall,a1,a2,a3,a4,a5, a8)                                      \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5") = (a3);                                         \
        register u64 p4 asm("6") = (a4);                                         \
        register u64 p5 asm("7") = (a5);                                         \
        register u64 p6 asm("8");                                                \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall6_sc10_15(syscall,a1,a2,a3,a4,a5,a6, a8)                                   \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5") = (a3);                                         \
        register u64 p4 asm("6") = (a4);                                         \
        register u64 p5 asm("7") = (a5);                                         \
        register u64 p6 asm("8") = (a6);                                         \
        register u64 p7 asm("9");                                                \
        register u64 p8 asm("10") = (a8);                                              \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")


#define lv2syscall7_sc10_15(syscall,a1,a2,a3,a4,a5,a6,a7,a8)                                \
        register u64 p1 asm("3") = (a1);                                         \
        register u64 p2 asm("4") = (a2);                                         \
        register u64 p3 asm("5") = (a3);                                         \
        register u64 p4 asm("6") = (a4);                                         \
        register u64 p5 asm("7") = (a5);                                         \
        register u64 p6 asm("8") = (a6);                                         \
        register u64 p7 asm("9") = (a7);                                         \
        register u64 p8 asm("10") = (a8);                                               \
        register u64 scn asm("11") = (syscall);                                  \
        __asm__ __volatile__("sc"                                                \
                             : "=r"(p1), "=r"(p2), "=r"(p3), "=r"(p4),           \
                               "=r"(p5), "=r"(p6), "=r"(p7), "=r"(p8), "=r"(scn) \
                             : "r"(p1), "r"(p2), "r"(p3), "r"(p4),               \
                               "r"(p5), "r"(p6), "r"(p7), "r"(p8), "r"(scn)      \
                             : "r0","r12","lr","ctr","xer","cr0","cr1","cr5","cr6","cr7","memory")




