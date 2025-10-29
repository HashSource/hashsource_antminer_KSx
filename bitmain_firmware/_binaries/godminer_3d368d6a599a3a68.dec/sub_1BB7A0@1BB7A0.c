int __fastcall sub_1BB7A0(int result, unsigned int *a2, char a3)
{
  unsigned __int8 *v3; // r2
  unsigned __int8 *v4; // r3
  unsigned __int8 *v5; // r3
  int v6; // r12
  int v7; // t1
  unsigned int v8; // r2
  unsigned int v9; // r2
  unsigned __int16 *v10; // r3
  char v11; // r12
  unsigned int v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // lr
  int v15; // t1
  char v16; // r1
  int v17; // r3
  int v18; // [sp+0h] [bp-20h]
  _BYTE v19[11]; // [sp+4h] [bp-1Ch]
  int v20; // [sp+10h] [bp-10h]
  _BYTE v21[7]; // [sp+14h] [bp-Ch]

  switch ( a3 )
  {
    case 1:
      v3 = (unsigned __int8 *)a2[1];
      v4 = (unsigned __int8 *)*a2;
      if ( !v3 )
        goto LABEL_7;
      v7 = *v4;
      v5 = v4 + 1;
      v6 = v7;
      v8 = (unsigned int)(v3 - 1);
      goto LABEL_13;
    case 2:
      v9 = a2[1];
      v10 = (unsigned __int16 *)*a2;
      if ( v9 < 2 )
      {
        *(_DWORD *)&v19[3] = *a2;
        *(_DWORD *)&v19[7] = 0;
        v11 = 19;
        goto LABEL_16;
      }
      v6 = *v10;
      *a2 = (unsigned int)(v10 + 1);
      a2[1] = v9 - 2;
      goto LABEL_14;
    case 4:
      v12 = a2[1];
      v4 = (unsigned __int8 *)*a2;
      if ( v12 < 4 )
      {
LABEL_7:
        v11 = 19;
        *(_DWORD *)&v19[7] = 0;
        *(_DWORD *)&v19[3] = v4;
        goto LABEL_16;
      }
      v8 = v12 - 4;
      v15 = *(_DWORD *)v4;
      v5 = v4 + 4;
      v6 = v15;
LABEL_13:
      a2[1] = v8;
      *a2 = (unsigned int)v5;
      goto LABEL_14;
    case 8:
      v13 = *a2;
      v14 = a2[1];
      if ( v14 >= 8 )
      {
        v6 = *(_DWORD *)v13;
        v17 = *(_DWORD *)(v13 + 4);
        *a2 = v13 + 8;
        a2[1] = v14 - 8;
        v16 = 53;
        if ( !v17 )
        {
LABEL_14:
          v16 = 75;
          *(_DWORD *)(result + 4) = v6;
        }
        *(_BYTE *)result = v16;
      }
      else
      {
        *(_DWORD *)&v21[3] = *a2;
        v11 = 19;
        v18 = v20;
        *(_WORD *)&v19[4] = v13 >> 8;
        v19[10] = 0;
        *(_DWORD *)&v19[6] = HIBYTE(*a2);
        *(_DWORD *)v19 = *(_DWORD *)v21;
LABEL_16:
        *(_DWORD *)(result + 9) = *(_DWORD *)&v19[4];
        *(_BYTE *)result = v11;
        *(_DWORD *)(result + 1) = v18;
        *(_DWORD *)(result + 5) = *(_DWORD *)v19;
        *(_DWORD *)(result + 12) = *(_DWORD *)&v19[7];
      }
      return result;
    default:
      v11 = 24;
      LOBYTE(v18) = a3;
      goto LABEL_16;
  }
}
