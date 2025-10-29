int __fastcall <miniz_oxide::MZError as core::fmt::Debug>::fmt(_DWORD *a1, int a2)
{
  int v3; // r2
  char *v4; // r1
  int v5; // r0

  v3 = 5;
  v4 = (char *)&unk_2B1D01;
  switch ( *a1 )
  {
    case 0xFFFFFFFA:
      v3 = 7;
      v5 = a2;
      v4 = aVersion_0;
      return <core::fmt::Formatter as core::fmt::Write>::write_str(v5, v4, v3);
    case 0xFFFFFFFB:
      return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aBuf, 3);
    case 0xFFFFFFFC:
      return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aMem, 3);
    case 0xFFFFFFFD:
      return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aData, 4);
    case 0xFFFFFFFE:
      return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, aStream_0, 6);
    case 0xFFFFFFFF:
      goto LABEL_6;
    default:
      v4 = &aHasmoreoutputn[93];
LABEL_6:
      v5 = a2;
      return <core::fmt::Formatter as core::fmt::Write>::write_str(v5, v4, v3);
  }
}
