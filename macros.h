#ifndef MACROS_H
#define MACROS_H

#define NVP(X) std::make_tuple(#X, &X)

// Helper macros to apply NVP to each argument
#define APPLY_NVP_1(x1) NVP(x1)
#define APPLY_NVP_2(x1, x2) NVP(x1), NVP(x2)
#define APPLY_NVP_3(x1, x2, x3) NVP(x1), NVP(x2), NVP(x3)
#define APPLY_NVP_4(x1, x2, x3, x4) NVP(x1), NVP(x2), NVP(x3), NVP(x4)
#define APPLY_NVP_5(x1, x2, x3, x4, x5) \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5)
#define APPLY_NVP_6(x1, x2, x3, x4, x5, x6) \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6)
#define APPLY_NVP_7(x1, x2, x3, x4, x5, x6, x7) \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7)
#define APPLY_NVP_8(x1, x2, x3, x4, x5, x6, x7, x8) \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8)
#define APPLY_NVP_9(x1, x2, x3, x4, x5, x6, x7, x8, x9)                   \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8), \
      NVP(x9)
#define APPLY_NVP_10(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10)             \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8), \
      NVP(x9), NVP(x10)
#define APPLY_NVP_11(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11)        \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8), \
      NVP(x9), NVP(x10), NVP(x11)
#define APPLY_NVP_12(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12)   \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8), \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12)
#define APPLY_NVP_13(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13) \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13)
#define APPLY_NVP_14(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14)                                                    \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14)
#define APPLY_NVP_15(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15)                                               \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15)
#define APPLY_NVP_16(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16)                                          \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16)
#define APPLY_NVP_17(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17)                                     \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17)
#define APPLY_NVP_18(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18)                                \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18)
#define APPLY_NVP_19(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19)                           \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19)
#define APPLY_NVP_20(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20)                      \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20)
#define APPLY_NVP_21(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21)                 \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21)
#define APPLY_NVP_22(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22)            \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22)
#define APPLY_NVP_23(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23)       \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23)
#define APPLY_NVP_24(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24)  \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24)
#define APPLY_NVP_25(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25)                                                    \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25)
#define APPLY_NVP_26(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26)                                               \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26)
#define APPLY_NVP_27(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27)                                          \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27)
#define APPLY_NVP_28(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28)                                     \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28)
#define APPLY_NVP_29(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29)                                \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29)
#define APPLY_NVP_30(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30)                           \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30)
#define APPLY_NVP_31(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31)                      \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31)
#define APPLY_NVP_32(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32)                 \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32)
#define APPLY_NVP_33(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33)            \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33)
#define APPLY_NVP_34(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34)       \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34)
#define APPLY_NVP_35(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35)  \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35)
#define APPLY_NVP_36(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35,  \
                     x36)                                                    \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35), NVP(x36)
#define APPLY_NVP_37(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35,  \
                     x36, x37)                                               \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35), NVP(x36),  \
      NVP(x37)
#define APPLY_NVP_38(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35,  \
                     x36, x37, x38)                                          \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35), NVP(x36),  \
      NVP(x37), NVP(x38)
#define APPLY_NVP_39(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35,  \
                     x36, x37, x38, x39)                                     \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35), NVP(x36),  \
      NVP(x37), NVP(x38), NVP(x39)
#define APPLY_NVP_40(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, \
                     x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24,  \
                     x25, x26, x27, x28, x29, x30, x31, x32, x33, x34, x35,  \
                     x36, x37, x38, x39, x40)                                \
  NVP(x1), NVP(x2), NVP(x3), NVP(x4), NVP(x5), NVP(x6), NVP(x7), NVP(x8),    \
      NVP(x9), NVP(x10), NVP(x11), NVP(x12), NVP(x13), NVP(x14), NVP(x15),   \
      NVP(x16), NVP(x17), NVP(x18), NVP(x19), NVP(x20), NVP(x21), NVP(x22),  \
      NVP(x23), NVP(x24), NVP(x25), NVP(x26), NVP(x27), NVP(x28), NVP(x29),  \
      NVP(x30), NVP(x31), NVP(x32), NVP(x33), NVP(x34), NVP(x35), NVP(x36),  \
      NVP(x37), NVP(x38), NVP(x39), NVP(x40)

// Macro that selects the correct APPLY_NVP_X depending on argument count
#define GET_MACRO(_1, _2, _3, _4, NAME, ...) NAME
#define APPLY_NVP(...)                                                       \
  GET_MACRO(__VA_ARGS__, APPLY_NVP_4, APPLY_NVP_3, APPLY_NVP_2, APPLY_NVP_1) \
  (__VA_ARGS__)

// The SERIALISE macro
#define SERIALISE(...)                  \
  template <class Ar>                   \
  void serialize(Ar&& ar) {             \
    ar.archive(APPLY_NVP(__VA_ARGS__)); \
  }
#endif // MACROS_H
