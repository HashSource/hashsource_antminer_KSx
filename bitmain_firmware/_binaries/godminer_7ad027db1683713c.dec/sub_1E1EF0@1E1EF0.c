unsigned int __fastcall sub_1E1EF0(int a1, int a2, int a3, int a4)
{
  unsigned int v9; // r8
  unsigned int v10; // lr
  int v11; // r9
  int v12; // r4
  int v13; // r5
  int v14; // r6
  int v15; // r7
  int v16; // r4
  int v17; // r5
  int v18; // r6
  int v19; // r7
  int v20; // r3
  int v21; // r4
  int v22; // r5
  int v23; // r6
  int v24; // r7
  int v25; // r5
  int v26; // r0
  int v27; // [sp+Ch] [bp-190h]
  int v28; // [sp+10h] [bp-18Ch]
  int v29; // [sp+14h] [bp-188h]
  int v30; // [sp+18h] [bp-184h]
  int v31; // [sp+1Ch] [bp-180h]
  int v32; // [sp+20h] [bp-17Ch]
  int v33; // [sp+24h] [bp-178h]
  int v34; // [sp+28h] [bp-174h]
  int v35; // [sp+2Ch] [bp-170h]
  int v36; // [sp+30h] [bp-16Ch]
  unsigned int v37; // [sp+34h] [bp-168h]
  unsigned int v38; // [sp+38h] [bp-164h]
  int v39; // [sp+3Ch] [bp-160h]
  int v40; // [sp+40h] [bp-15Ch]
  int v41; // [sp+44h] [bp-158h]
  int v42; // [sp+48h] [bp-154h]
  unsigned int v43; // [sp+4Ch] [bp-150h]
  unsigned int v44; // [sp+50h] [bp-14Ch]
  unsigned int v45; // [sp+54h] [bp-148h]
  _DWORD s[69]; // [sp+58h] [bp-144h] BYREF
  int v47; // [sp+16Ch] [bp-30h]
  int v48; // [sp+170h] [bp-2Ch]
  int v49; // [sp+174h] [bp-28h]
  int v50; // [sp+178h] [bp-24h]
  int v51; // [sp+17Ch] [bp-20h]
  int v52; // [sp+180h] [bp-1Ch]
  int v53; // [sp+184h] [bp-18h]
  int v54; // [sp+188h] [bp-14h]
  int v55; // [sp+18Ch] [bp-10h]
  int v56; // [sp+190h] [bp-Ch]
  int v57; // [sp+194h] [bp-8h]

  if ( byte_2E9632 == 2 )
    goto LABEL_2;
  memset(s, 0, 0x100u);
  if ( &statx )
  {
    if ( statx(a2, a3, a4, 4095, s) != -1 )
    {
LABEL_5:
      v9 = s[33];
      v44 = s[9];
      v45 = s[8];
      v37 = s[13];
      v38 = s[12];
      v30 = s[10];
      v43 = s[1];
      v36 = s[4];
      v35 = s[5];
      v34 = s[6];
      v40 = s[18];
      v41 = s[30];
      v42 = s[26];
      v31 = LOWORD(s[7]);
      v27 = s[32];
      v32 = s[16];
      v33 = s[28];
      v29 = s[11];
      v39 = s[24];
      v28 = s[0];
      s[64] = s[20];
      s[66] = s[22];
      s[65] = s[21];
      s[67] = s[23];
      v48 = s[18];
      s[68] = s[16];
      v47 = s[17];
      v50 = s[24];
      v51 = s[25];
      v53 = s[27];
      v52 = s[26];
      v54 = s[28];
      v55 = s[29];
      v56 = s[30];
      v57 = s[31];
      v49 = s[19];
      v10 = s[35];
      v11 = s[34];
      v12 = s[21];
      v13 = s[22];
      v14 = s[23];
      v15 = s[16];
      *(_DWORD *)(a1 + 8) = s[20];
      *(_DWORD *)(a1 + 12) = v12;
      *(_DWORD *)(a1 + 16) = v13;
      *(_DWORD *)(a1 + 20) = v14;
      *(_DWORD *)(a1 + 24) = v15;
      v16 = v48;
      v17 = v49;
      v18 = v50;
      v19 = v51;
      *(_DWORD *)(a1 + 28) = v47;
      *(_DWORD *)(a1 + 32) = v16;
      *(_DWORD *)(a1 + 36) = v17;
      *(_DWORD *)(a1 + 40) = v18;
      *(_DWORD *)(a1 + 44) = v19;
      v20 = v53;
      v21 = v54;
      v22 = v55;
      v23 = v56;
      v24 = v57;
      *(_DWORD *)(a1 + 48) = v52;
      *(_DWORD *)(a1 + 52) = v20;
      *(_DWORD *)(a1 + 56) = v21;
      *(_DWORD *)(a1 + 60) = v22;
      *(_DWORD *)(a1 + 64) = v23;
      *(_DWORD *)(a1 + 68) = v24;
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 84) = v11 & 0xFFFFF000 | (v10 >> 20);
      *(_DWORD *)(a1 + 80) = (unsigned __int8)v10 | ((v11 & 0xFFF) << 8) | (v10 << 12) & 0xFFF00000;
      *(_DWORD *)(a1 + 132) = v29;
      *(_DWORD *)(a1 + 128) = v30;
      *(_DWORD *)(a1 + 116) = v27 & 0xFFFFF000 | (v9 >> 20);
      *(_DWORD *)(a1 + 112) = (unsigned __int8)v9 | ((v27 & 0xFFF) << 8) | (v9 << 12) & 0xFFF00000;
      *(_QWORD *)(a1 + 144) = __PAIR64__(v37, v38);
      *(_DWORD *)(a1 + 72) = v28;
      *(_DWORD *)(a1 + 96) = v31;
      *(_DWORD *)(a1 + 100) = v36;
      *(_DWORD *)(a1 + 104) = v35;
      *(_DWORD *)(a1 + 108) = v34;
      *(_QWORD *)(a1 + 136) = v43;
      *(_DWORD *)(a1 + 152) = v32;
      *(_DWORD *)(a1 + 156) = v40;
      *(_DWORD *)(a1 + 160) = v33;
      *(_DWORD *)(a1 + 164) = v41;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 92) = 0;
      *(_DWORD *)(a1 + 88) = 0;
      *(_DWORD *)(a1 + 124) = 0;
      *(_DWORD *)(a1 + 120) = 0;
      *(_DWORD *)(a1 + 168) = v39;
      *(_DWORD *)(a1 + 172) = v42;
      *(_QWORD *)(a1 + 176) = __PAIR64__(v44, v45);
      return v45;
    }
  }
  else if ( syscall(397, a2, a3, a4, 4095, s) != -1 )
  {
    goto LABEL_5;
  }
  v25 = *_errno_location();
  if ( byte_2E9632 != 1 )
  {
    if ( v25 == 38
      || (!&statx ? (v26 = syscall(397, 0, 0, 0, 4095, 0)) : (v26 = statx(0, 0, 0, 4095, 0)),
          v26 != -1 || *_errno_location() != 14) )
    {
      byte_2E9632 = 2;
LABEL_2:
      *(_QWORD *)a1 = 3;
      return 3;
    }
    byte_2E9632 = 1;
  }
  *(_DWORD *)a1 = 2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = v25;
  return 0;
}
