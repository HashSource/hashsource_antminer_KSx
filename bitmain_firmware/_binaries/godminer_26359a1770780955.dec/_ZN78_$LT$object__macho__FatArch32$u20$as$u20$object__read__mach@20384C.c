unsigned int __fastcall <object::macho::FatArch32 as object::read::macho::fat::FatArch>::cpusubtype(int a1)
{
  return bswap32(*(_DWORD *)(a1 + 4));
}
