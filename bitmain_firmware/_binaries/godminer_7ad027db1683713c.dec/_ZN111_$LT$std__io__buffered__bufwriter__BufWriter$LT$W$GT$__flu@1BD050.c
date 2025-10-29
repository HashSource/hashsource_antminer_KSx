char *__fastcall <std::io::buffered::bufwriter::BufWriter<W>::flush_buf::BufGuard as core::ops::drop::Drop>::drop(
        char **a1)
{
  char *result; // r0
  char *v3; // r5
  char *v4; // r1
  int v5; // r4

  result = *a1;
  if ( result )
  {
    v3 = a1[1];
    v4 = (char *)*((_DWORD *)v3 + 2);
    if ( v4 < result )
      core::slice::index::slice_end_index_len_fail((int)result, (int)v4, (int)&off_2C9538);
    *((_DWORD *)v3 + 2) = 0;
    if ( v4 != result )
    {
      v5 = v4 - result;
      result = (char *)memmove(*((void **)v3 + 1), &result[*((_DWORD *)v3 + 1)], v4 - result);
      *((_DWORD *)v3 + 2) = v5;
    }
  }
  return result;
}
