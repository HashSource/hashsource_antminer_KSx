bool __fastcall <std::sys::unix::fs::FileType as core::cmp::PartialEq>::eq(_DWORD *a1, _DWORD *a2)
{
  return (((unsigned __int16)*a2 ^ (unsigned __int16)*a1) & 0xF000) == 0;
}
