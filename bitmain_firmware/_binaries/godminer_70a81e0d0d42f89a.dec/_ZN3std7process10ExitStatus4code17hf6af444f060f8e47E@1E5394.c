bool __fastcall std::process::ExitStatus::code(_DWORD *a1)
{
  return (*a1 & 0x7F) == 0;
}
