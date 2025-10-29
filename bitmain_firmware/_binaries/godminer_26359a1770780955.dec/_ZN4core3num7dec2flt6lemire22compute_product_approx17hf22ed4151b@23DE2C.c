int __fastcall core::num::dec2flt::lemire::compute_product_approx(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r11
  unsigned int v8; // r1
  unsigned int v9; // r5
  int result; // r0
  unsigned __int64 v11; // r2
  unsigned __int64 v12; // kr10_8
  bool v13; // cf
  unsigned __int64 v14; // r2
  unsigned int v15; // r7
  int v16; // r5
  int v17; // r4
  unsigned int v18; // r7
  __int64 v19; // r4

  v5 = a1 + 342;
  if ( (unsigned int)(a1 + 342) > 0x28A )
    core::panicking::panic_bounds_check(v5, 651, (int)&off_2E3B24);
  v8 = *((_DWORD *)&unk_2B4D50 + 4 * v5);
  v9 = *((_DWORD *)&unk_2B4D50 + 4 * v5 + 1);
  result = v8 * a3;
  v11 = v9 * (unsigned __int64)a3 + ((v8 * (unsigned __int64)a3) >> 32);
  v12 = v8 * (unsigned __int64)a4;
  v13 = __CFADD__(__CFADD__((_DWORD)v12, (_DWORD)v11), HIDWORD(v11));
  LODWORD(v11) = (v12 + v11) >> 32;
  HIDWORD(v11) = v13 | __CFADD__(HIDWORD(v12), (_DWORD)v11);
  v14 = v9 * (unsigned __int64)a4 + v11;
  v15 = 0xFFFFFFFF >> (a5 & 0x3F);
  v16 = (a5 & 0x3F) - 32;
  if ( v16 >= 0 )
    v15 = 0;
  if ( a5 >= 0x40 )
    v15 = -1;
  v17 = v15 & HIDWORD(v14) ^ v15;
  v18 = -1;
  if ( v16 >= 0 )
    v18 = 0xFFFFFFFF >> v16;
  if ( a5 >= 0x40 )
    v18 = -1;
  if ( !(v18 & (unsigned int)v14 ^ v18 | v17) )
  {
    v19 = *((_QWORD *)&unk_2B4D50 + 2 * v5 + 1);
    result += HIDWORD(v19) * a4
            + (((unsigned int)v19 * (unsigned __int64)a4
              + HIDWORD(v19) * (unsigned __int64)a3
              + (((unsigned int)v19 * (unsigned __int64)a3) >> 32)) >> 32);
  }
  return result;
}
