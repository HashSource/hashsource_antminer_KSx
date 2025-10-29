bool __fastcall std::fs::Permissions::readonly(_BYTE *a1)
{
  return (*a1 & 0x92) == 0;
}
