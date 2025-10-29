int __fastcall gimli::read::value::Value::to_u64(int result, int a2, __int64 a3)
{
  int v3; // r2
  unsigned int v4; // r2

  switch ( *(_BYTE *)a2 )
  {
    case 0:
      *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8) & a3;
      *(_BYTE *)result = 75;
      return result;
    case 1:
      v3 = *(char *)(a2 + 1);
      goto LABEL_10;
    case 2:
      v4 = *(unsigned __int8 *)(a2 + 1);
      goto LABEL_12;
    case 3:
      v3 = *(__int16 *)(a2 + 2);
      goto LABEL_10;
    case 4:
      v4 = *(unsigned __int16 *)(a2 + 2);
      goto LABEL_12;
    case 5:
      v3 = *(_DWORD *)(a2 + 4);
LABEL_10:
      *(_QWORD *)(result + 8) = v3;
      *(_BYTE *)result = 75;
      break;
    case 6:
      v4 = *(_DWORD *)(a2 + 4);
LABEL_12:
      *(_QWORD *)(result + 8) = v4;
      *(_BYTE *)result = 75;
      break;
    case 7:
    case 8:
      *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
      *(_BYTE *)result = 75;
      break;
    default:
      *(_BYTE *)result = 44;
      break;
  }
  return result;
}
