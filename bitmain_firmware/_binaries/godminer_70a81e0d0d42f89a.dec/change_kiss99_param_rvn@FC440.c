int __fastcall change_kiss99_param_rvn(int a1, int a2, int a3)
{
  if ( a2 )
  {
    sub_FB1E4(a1, 56, a2);
    sub_FB1E4(a1, 57, a3);
    if ( a2 == 26 )
      sub_FB1E4(a1, 54, 0);
    return 0;
  }
  else
  {
    sub_FB1E4(a1, 54, 1);
    sub_FB1E4(a1, 56, 0);
    sub_FB1E4(a1, 57, a3);
    return 0;
  }
}
