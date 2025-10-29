int __fastcall sub_1BB524(_DWORD *a1)
{
  int v1; // r5
  int v2; // r2
  int v3; // r1
  _BOOL4 v4; // r0

  v2 = *a1 - 2;
  v3 = 0;
  switch ( *a1 )
  {
    case 2:
      v1 = 0;
      v2 = *((unsigned __int8 *)a1 + 8);
      goto LABEL_7;
    case 3:
      v1 = 0;
      v2 = *((unsigned __int16 *)a1 + 4);
      goto LABEL_7;
    case 4:
      v1 = 0;
      v2 = a1[2];
      goto LABEL_7;
    case 5:
    case 7:
      v2 = a1[2];
      v1 = a1[3];
LABEL_7:
      v4 = 1;
      break;
    case 6:
      v1 = a1[3];
      v2 = a1[2];
      v4 = v1 > -1;
      break;
    default:
      v4 = 0;
      break;
  }
  if ( __PAIR64__(v1, v2) < 0x100 )
    v3 = 1;
  return v4 & v3;
}
