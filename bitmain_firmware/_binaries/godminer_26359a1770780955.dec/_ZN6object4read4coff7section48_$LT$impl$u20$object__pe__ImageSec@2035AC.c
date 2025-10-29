int __fastcall object::read::coff::section::<impl object::pe::ImageSectionHeader>::coff_alignment(int a1)
{
  unsigned int v1; // r2
  int result; // r0

  v1 = ((*(_DWORD *)(a1 + 36) & 0xF00000u) - 0x100000) >> 20;
  result = 16;
  switch ( v1 )
  {
    case 0u:
      result = 1;
      break;
    case 1u:
      result = 2;
      break;
    case 2u:
      result = 4;
      break;
    case 3u:
      result = 8;
      break;
    case 4u:
      return result;
    case 5u:
      result = 32;
      break;
    case 6u:
      result = 64;
      break;
    case 7u:
      result = 128;
      break;
    case 8u:
      result = 256;
      break;
    case 9u:
      result = 512;
      break;
    case 0xAu:
      result = 1024;
      break;
    case 0xBu:
      result = 2048;
      break;
    case 0xCu:
      result = 4096;
      break;
    case 0xDu:
      result = 0x2000;
      break;
  }
  return result;
}
