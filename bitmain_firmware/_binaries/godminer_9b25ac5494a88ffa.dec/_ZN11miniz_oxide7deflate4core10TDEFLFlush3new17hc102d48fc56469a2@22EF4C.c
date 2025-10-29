int __fastcall miniz_oxide::deflate::core::TDEFLFlush::new(int result, int a2)
{
  switch ( a2 )
  {
    case 0:
      *(_BYTE *)(result + 1) = 0;
      *(_BYTE *)result = 0;
      break;
    case 2:
      *(_BYTE *)(result + 1) = 2;
      *(_BYTE *)result = 0;
      break;
    case 3:
      *(_BYTE *)(result + 1) = 3;
      *(_BYTE *)result = 0;
      break;
    case 4:
      *(_BYTE *)(result + 1) = 4;
      *(_BYTE *)result = 0;
      break;
    default:
      *(_DWORD *)(result + 4) = -10000;
      *(_BYTE *)result = 1;
      break;
  }
  return result;
}
