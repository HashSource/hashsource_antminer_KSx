unsigned int __fastcall <object::macho::FatArch32 as object::read::macho::fat::FatArch>::align(int a1)
{
  return bswap32(*(_DWORD *)(a1 + 16));
}
