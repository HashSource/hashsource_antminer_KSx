void __fastcall sub_271A28(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _QWORD *a11,
        _DWORD *a12,
        _DWORD *a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        unsigned int a27,
        unsigned int a28,
        int a29)
{
  __int64 v29; // r4
  int v30; // r7
  unsigned int v31; // r9
  int v32; // r10
  int v33; // r11
  unsigned int v34; // r12
  unsigned int v35; // lr
  __int64 v36; // r6
  unsigned __int64 v37; // kr00_8
  unsigned int v38; // r4
  int v39; // r5

  *a12 = v33;
  a12[1] = a22 ^ v31 ^ a2;
  *a13 = v30;
  a13[1] = a22 ^ v31 ^ ((a2 << 17) | (v35 >> 15));
  LODWORD(v36) = v29 >> 19;
  HIDWORD(v36) = ((_DWORD)v29 << 13) | (HIDWORD(v29) >> 19);
  *a11 = v36;
  v37 = (((__PAIR64__(a27, a28) + __PAIR64__(v31, v34)) << 23)
       | ((unsigned int)((__PAIR64__(a27, a28) + __PAIR64__(v31, v34)) >> 32) >> 9))
      + __PAIR64__(v31, v34);
  v38 = ((unsigned int)v37 >> (4 * v32)) | (HIDWORD(v37) << (32 - 4 * v32));
  v39 = 4 * v32 - 32;
  if ( v39 >= 0 )
    v38 = HIDWORD(v37) >> v39;
  *(_WORD *)((char *)&STACK[0x4068] + a1) = v38 & 0xF;
  if ( a1 == 126 )
  {
    memcpy(&a29, &STACK[0x4068], 0x80u);
    JUMPOUT(0x27192C);
  }
  JUMPOUT(0x2719BC);
}
