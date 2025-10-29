void *__fastcall sub_25CD64(void *a1, int *a2, int *a3)
{
  int v3; // r11
  int v4; // r3
  int v5; // r10
  int v6; // lr
  int v7; // r9
  unsigned int v8; // r7
  __int16 *v9; // r1
  unsigned __int16 v10; // r5
  int v11; // r6
  int v12; // r4
  __int16 v13; // r8
  int v14; // r0
  _DWORD src[10]; // [sp+8h] [bp-4Ch] BYREF
  _DWORD v18[9]; // [sp+30h] [bp-24h]

  v3 = *a3;
  v4 = *a2;
  v5 = 0;
  v6 = a2[1] + (*a3 << 8) + 128;
  do
  {
    if ( (unsigned int)(2 * v3) > 0x3F )
      core::panicking::panic_bounds_check(2 * v3, 64, (int)&off_2D0EBC);
    v7 = v5 + 1;
    v8 = 0;
    v9 = (__int16 *)v6;
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = *(unsigned __int8 *)(v4 + v11++);
      v13 = *v9;
      v14 = (unsigned __int16)*(v9 - 64);
      ++v9;
      v10 += v13 * v12;
      v8 += v14 * v12;
    }
    while ( v11 != 64 );
    ++v3;
    v6 += 256;
    *((_BYTE *)v18 + v5++) = (v8 >> 6) & 0xF0 | (v10 >> 10);
    *a3 = v3;
  }
  while ( v7 != 32 );
  src[0] = v18[0];
  src[1] = v18[1];
  src[2] = v18[2];
  src[3] = v18[3];
  src[4] = v18[4];
  src[5] = v18[5];
  src[6] = v18[6];
  src[7] = v18[7];
  return memcpy(a1, src, 0x20u);
}
