int __fastcall gimli::read::line::LineRow::apply_line_advance(int result, __int64 a2)
{
  unsigned int v3; // r12
  unsigned int v4; // t1

  if ( a2 < 0 )
  {
    v4 = *(_DWORD *)(result + 24);
    result += 24;
    v3 = v4;
    if ( __PAIR64__(*(_DWORD *)(result + 4), v4) >= -a2 )
    {
      *(_QWORD *)result = __PAIR64__(*(_DWORD *)(result + 4), v3) + a2;
    }
    else
    {
      *(_DWORD *)result = 0;
      *(_DWORD *)(result + 4) = 0;
    }
  }
  else
  {
    *(_QWORD *)(result + 24) += a2;
  }
  return result;
}
