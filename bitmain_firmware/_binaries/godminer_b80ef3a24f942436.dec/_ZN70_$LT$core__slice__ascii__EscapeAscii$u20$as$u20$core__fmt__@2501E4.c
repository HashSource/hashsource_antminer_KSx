bool __fastcall <core::slice::ascii::EscapeAscii as core::fmt::Display>::fmt(int a1, int *a2)
{
  unsigned __int8 v2; // r5
  char v3; // r7
  unsigned int v4; // r9
  unsigned __int8 v5; // r12
  int v6; // r2
  char v7; // lr
  int v8; // r6
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r4
  int v11; // r8
  int v12; // r5
  unsigned int v13; // r7
  int v14; // r0
  int v15; // r10
  int v17; // r5
  int (__fastcall *v18)(int, unsigned int); // r6
  unsigned int v19; // r0
  unsigned int v20; // t1
  int v21; // r11
  int v22; // r10
  int v23; // r7
  int v24; // r0
  int v25; // r0
  unsigned int v26; // r1
  int v27; // r0
  int v28; // r0
  bool v29; // zf
  int v30; // r0
  int v31; // r0
  unsigned int v32; // r7
  int v33; // r9
  int v34; // r0
  int v35; // r5
  unsigned __int8 v38; // [sp+8h] [bp-34h]
  unsigned __int8 v39; // [sp+Ch] [bp-30h]
  int v40; // [sp+14h] [bp-28h]
  unsigned __int8 *v41; // [sp+18h] [bp-24h]
  unsigned int v42; // [sp+1Ch] [bp-20h]
  int v43; // [sp+20h] [bp-1Ch]
  unsigned int v44; // [sp+2Dh] [bp-Fh] BYREF
  char v45; // [sp+31h] [bp-Bh]
  char v46; // [sp+32h] [bp-Ah]
  char v47; // [sp+33h] [bp-9h]
  int v48; // [sp+34h] [bp-8h] BYREF
  unsigned __int8 v49; // [sp+38h] [bp-4h]
  char v50; // [sp+39h] [bp-3h]

  v6 = *(unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v4 = *(_DWORD *)(a1 + 9);
    v3 = *(_BYTE *)(a1 + 14);
    v5 = *(_BYTE *)(a1 + 13);
  }
  v8 = *(unsigned __int8 *)(a1 + 15);
  v9 = *(unsigned __int8 **)a1;
  v41 = *(unsigned __int8 **)a1;
  v40 = v8;
  if ( *(_BYTE *)(a1 + 15) )
  {
    v8 = *(_DWORD *)(a1 + 16);
    v7 = 1;
    LOBYTE(v9) = *(_BYTE *)(a1 + 21);
    v2 = *(_BYTE *)(a1 + 20);
  }
  v10 = *(unsigned __int8 **)(a1 + 4);
  v11 = *a2;
  v43 = a2[1];
  v38 = (unsigned __int8)v9;
  v50 = (char)v9;
  v39 = v2;
  v49 = v2;
  v48 = v8;
  v47 = v7;
  LOBYTE(v42) = v3;
  v46 = v3;
  v44 = v4;
  if ( !v6 )
    goto LABEL_15;
  v12 = v5;
  v13 = v5 - 1;
  v14 = v5;
  if ( (unsigned __int8)v42 > (unsigned int)v5 )
    v14 = (unsigned __int8)v42;
  if ( v5 <= 4u )
    v12 = 4;
  v15 = -v14;
  do
  {
    if ( v15 + v13 == -1 )
      goto LABEL_15;
    v45 = v13 + 2;
    if ( v13 - v12 == -1 )
    {
      v31 = v12;
      goto LABEL_56;
    }
  }
  while ( !(*(int (__fastcall **)(int, _DWORD))(v43 + 16))(v11, *((unsigned __int8 *)&v44 + ++v13)) );
  v17 = 1;
  if ( v13 < (unsigned __int8)v42 )
    return v17;
LABEL_15:
  if ( !v10 )
  {
LABEL_42:
    if ( !v40 )
      return 0;
    v32 = v39 - 1;
    v33 = v39;
    v34 = v39;
    if ( v38 > (unsigned int)v39 )
      v34 = v38;
    if ( v39 <= 4u )
      v33 = 4;
    v35 = -v34;
    while ( 1 )
    {
      if ( v35 + v32 == -1 )
        return 0;
      v49 = v32 + 2;
      if ( v32 - v33 == -1 )
        break;
      if ( (*(int (__fastcall **)(int, _DWORD))(v43 + 16))(v11, *((unsigned __int8 *)&v48 + ++v32)) )
        return v32 < v38;
    }
    v31 = v33;
LABEL_56:
    core::panicking::panic_bounds_check(v31, 4, (int)&off_2EEF4C);
  }
  if ( v10 == v41 )
  {
LABEL_41:
    v46 = v42;
    v44 = v4;
    goto LABEL_42;
  }
  v17 = 1;
  v18 = *(int (__fastcall **)(int, unsigned int))(v43 + 16);
  while ( 1 )
  {
    v20 = *v10++;
    v19 = v20;
    v21 = 1;
    v22 = 0;
    v42 = 2;
    v4 = 29788;
    v23 = 0;
    switch ( v20 )
    {
      case 9u:
        break;
      case 0xAu:
        v4 = 28252;
        v23 = 0;
        break;
      case 0xBu:
      case 0xCu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
        goto LABEL_24;
      case 0xDu:
        v4 = 29276;
        v23 = 0;
        break;
      case 0x22u:
        v4 = 8796;
        v23 = 0;
        break;
      case 0x27u:
        v4 = 10076;
        v23 = 0;
        break;
      default:
        if ( v19 == 92 )
        {
          v4 = 23644;
          v23 = 0;
        }
        else
        {
LABEL_24:
          if ( v19 - 32 >= 0x5F )
          {
            v23 = 1;
            v22 = 0;
            v21 = 0;
            v4 = (byte_2BF24F[v19 >> 4] << 16) | (byte_2BF24F[v19 & 0xF] << 24) | 0x785C;
            v24 = 4;
          }
          else
          {
            v4 = v19;
            v24 = 1;
            v22 = 1;
            v21 = 0;
            v23 = 0;
          }
          v42 = v24;
        }
        break;
    }
    if ( v18(v11, (unsigned __int8)v4) )
      return v17;
    if ( !v22 )
    {
      v25 = v18(v11, BYTE1(v4));
      v26 = v42;
      if ( v25 )
        v26 = 1;
      if ( !(v21 | v25) )
      {
        v27 = v18(v11, BYTE2(v4));
        v26 = 2;
        if ( !v27 )
        {
          v28 = v18(v11, HIBYTE(v4));
          v29 = v28 == 0;
          v26 = v42;
          v30 = v23 | v28;
          if ( !v29 )
            v26 = 3;
          if ( v30 != 1 )
          {
            v31 = 4;
            goto LABEL_56;
          }
        }
      }
      if ( v26 < v42 )
        return v17;
    }
    if ( v10 == v41 )
      goto LABEL_41;
  }
}
