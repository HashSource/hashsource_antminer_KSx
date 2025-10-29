__int64 __fastcall gimli::read::value::Value::xor(
        int a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // r3
  int v8; // r5
  int v9; // r9
  int v10; // r12
  __int16 v11; // r6
  signed __int8 v12; // r0
  char v13; // r0
  __int64 result; // r0
  int v15; // r10
  int v16; // r7
  int v17; // r1
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r1

  v6 = *a3;
  v8 = *a2;
  if ( v8 == v6 )
  {
    v9 = *((_DWORD *)a2 + 2);
    v10 = *((_DWORD *)a2 + 3);
    v11 = *((_WORD *)a2 + 1);
    v12 = a2[1];
    switch ( *a2 )
    {
      case 0u:
        v9 &= a5;
        v10 &= a6;
        break;
      case 1u:
        v9 = v12;
        v10 = v12 >> 31;
        break;
      case 2u:
        v10 = 0;
        v9 = a2[1];
        break;
      case 3u:
        v9 = v11;
        v10 = v11 >> 31;
        break;
      case 4u:
        v10 = 0;
        v9 = *((unsigned __int16 *)a2 + 1);
        break;
      case 5u:
        v10 = *((int *)a2 + 1) >> 31;
        goto LABEL_12;
      case 6u:
        v10 = 0;
LABEL_12:
        v9 = *((_DWORD *)a2 + 1);
        break;
      case 7u:
      case 8u:
        break;
      default:
LABEL_15:
        v13 = 44;
        goto LABEL_5;
    }
    v15 = *((_DWORD *)a3 + 1);
    v16 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 3);
    v18 = *((unsigned __int16 *)a3 + 1);
    v19 = a3[1];
    switch ( v6 )
    {
      case 0:
        v16 &= a5;
        v17 &= a6;
        break;
      case 1:
        v16 = (char)v19;
        v17 = (char)v19 >> 31;
        break;
      case 2:
        v17 = 0;
        v16 = v19;
        break;
      case 3:
        v16 = (__int16)v18;
        v17 = (__int16)v18 >> 31;
        break;
      case 4:
        v17 = 0;
        v16 = v18;
        break;
      case 5:
        v17 = v15 >> 31;
        goto LABEL_22;
      case 6:
        v17 = 0;
LABEL_22:
        v16 = v15;
        break;
      case 7:
      case 8:
        break;
      default:
        goto LABEL_15;
    }
    v20 = v16 ^ v9;
    v21 = v17 ^ v10;
    switch ( v8 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        *(_DWORD *)(a1 + 20) = v21;
        *(_WORD *)(a1 + 10) = v20;
        *(_BYTE *)(a1 + 9) = v20;
        *(_DWORD *)(a1 + 12) = v20;
        *(_DWORD *)(a1 + 16) = v20;
        *(_BYTE *)(a1 + 8) = v8;
        *(_QWORD *)a1 = 0;
        result = 0;
        break;
      default:
        goto LABEL_15;
    }
  }
  else
  {
    v13 = 43;
LABEL_5:
    *(_BYTE *)(a1 + 8) = v13;
    *(_QWORD *)a1 = 1;
    return 1;
  }
  return result;
}
