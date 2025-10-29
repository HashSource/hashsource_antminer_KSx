bool __fastcall object::read::elf::version::VersionIndex::is_local(_WORD *a1)
{
  return (*a1 & 0x7FFF) == 0;
}
