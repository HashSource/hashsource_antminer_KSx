int __fastcall <object::common::SymbolKind as core::fmt::Debug>::fmt(unsigned __int8 *a1, int a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(
           a2,
           (&off_2E0638)[*a1],
           *(_DWORD *)&aCriticalSectio[4 * *a1 + 96]);
}
