double *api_flush()
{
  total_diff_accepted = 0.0;
  total_diff_rejected = 0.0;
  dbl_2E6F90 = 0.0;
  total_diff_stale = 0.0;
  total_getworks = 0.0;
  local_work = 0;
  new_blocks = 0;
  last_getwork = 0;
  total_stale = 0.0;
  dword_2E6F88 = 0;
  dbl_2E6F98 = 0.0;
  total_discarded = 0.0;
  total_go = 0;
  total_ro = 0;
  total_accepted = 0.0;
  total_rejected = 0.0;
  total_diff1 = 0.0;
  return &total_accepted;
}
