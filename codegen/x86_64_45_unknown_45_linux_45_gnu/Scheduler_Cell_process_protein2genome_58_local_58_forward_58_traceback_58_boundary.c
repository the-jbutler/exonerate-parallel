/* Code automatically generated by C4 DP library
 * Do not attempt to edit this code: it is spagetti.
 *
 * Model: protein2genome:local
 */

 /* ---< START >--- */

#include "ungapped.h"
#include "submat.h"
#include "affine.h"

/* Seeded Viterbi DP implementation. */

#include "scheduler.h"

void Scheduler_Cell_process_protein2genome_58_local_58_forward_58_traceback_58_boundary(Scheduler_Cell *cell,
        Scheduler_Row *row,
        Scheduler_Pair *spair){
register gint seed_id = 0;
register gint src_query_pos,
              src_target_pos,
              dst_query_pos,
              dst_target_pos;
register C4_Score src_score, dst_score,
         transition_score, max_score;
register C4_Transition *transition;
Scheduler_SpanSeed span_seed;
register Scheduler_SpanData *span_data;
register C4_Shadow *shadow;
register Scheduler_Row *dst_row;
register Scheduler_Cell *dst_cell;
src_query_pos = cell->query_pos;
src_target_pos = row->target_pos;
transition = spair->scheduler->model->transition_list->pdata[25];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_25;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_25;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_25;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[1][0])
goto end_of_transition_25;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 1,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_25:
transition = spair->scheduler->model->transition_list->pdata[24];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_24;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[3][0];
max_score = cell->score[3][1];
seed_id   = cell->score[3][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_24;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_24;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_24;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 3,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_24:
transition = spair->scheduler->model->transition_list->pdata[23];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_23;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[4][0];
max_score = cell->score[4][1];
seed_id   = cell->score[4][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_23;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_23;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_23;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 4,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_23:
transition = spair->scheduler->model->transition_list->pdata[22];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_22;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[0][0];
max_score = cell->score[0][1];
seed_id   = cell->score[0][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_22;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_22;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_22;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 0,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_22:
transition = spair->scheduler->model->transition_list->pdata[21];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_21;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[5][0];
max_score = cell->score[5][1];
seed_id   = cell->score[5][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_21;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_21;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_21;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 5,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_21:
transition = spair->scheduler->model->transition_list->pdata[20];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 3;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_20;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[5][0];
max_score = cell->score[5][1];
seed_id   = cell->score[5][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_20;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_20;
dst_row = Lookahead_get(spair->row_index, 3);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 3, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_20;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 5,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_20:
transition = spair->scheduler->model->transition_list->pdata[19];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_19;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_19;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_19;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[5][0])
goto end_of_transition_19;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 5,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_19:
transition = spair->scheduler->model->transition_list->pdata[18];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 1;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_18;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_18;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_18;
dst_row = Lookahead_get(spair->row_index, 1);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 1, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[5][0])
goto end_of_transition_18;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 5,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_18:
transition = spair->scheduler->model->transition_list->pdata[17];
dst_query_pos = src_query_pos + 1;
dst_target_pos = src_target_pos + 3;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_17;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_17;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_17;
if(spair->subopt_index){
if(SubOpt_Index_is_blocked(
spair->subopt_index,
src_query_pos-spair->region->query_start))
goto end_of_transition_17;
}
dst_row = Lookahead_get(spair->row_index, 3);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 3, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 1);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_17;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 1, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_17:
transition = spair->scheduler->model->transition_list->pdata[16];
dst_query_pos = src_query_pos + 1;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_16;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_16;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_16;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 1);
if(dst_cell){
if(dst_score <= dst_cell->score[3][0])
goto end_of_transition_16;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 1, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 3,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_16:
transition = spair->scheduler->model->transition_list->pdata[15];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 3;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_15;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_15;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_15;
dst_row = Lookahead_get(spair->row_index, 3);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 3, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[4][0])
goto end_of_transition_15;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 4,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_15:
transition = spair->scheduler->model->transition_list->pdata[14];
dst_query_pos = src_query_pos + 1;
dst_target_pos = src_target_pos + 0;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_14;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[3][0];
max_score = cell->score[3][1];
seed_id   = cell->score[3][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_14;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_14;
dst_row = Lookahead_get(spair->row_index, 0);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 0, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 1);
if(dst_cell){
if(dst_score <= dst_cell->score[3][0])
goto end_of_transition_14;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 1, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 3,
    dst_cell, 3,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_14:
transition = spair->scheduler->model->transition_list->pdata[13];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 3;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_13;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[4][0];
max_score = cell->score[4][1];
seed_id   = cell->score[4][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_13;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_13;
dst_row = Lookahead_get(spair->row_index, 3);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 3, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[4][0])
goto end_of_transition_13;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 4,
    dst_cell, 4,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_13:
transition = spair->scheduler->model->transition_list->pdata[12];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_12;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[8][0];
max_score = cell->score[8][1];
seed_id   = cell->score[8][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_12;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_12;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[12][0])
goto end_of_transition_12;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 8,
    dst_cell, 12,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_12:
span_data = spair->span_history->span_data[2];
span_seed.score = cell->score[12][0];
if(span_seed.score >= 0){
span_seed.max = cell->score[12][1];
span_seed.seed_id = cell->score[12][2];
span_seed.cell = cell->traceback[12];
span_seed.query_entry = src_query_pos;
span_seed.target_entry = src_target_pos;
span_seed.shadow_data = &cell->score[12][3];
Scheduler_SpanData_submit(span_data,
    &span_seed, spair->span_seed_cache, spair);
}transition = spair->scheduler->model->transition_list->pdata[10];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_10;
if(cell->permit_span_thaw){
span_data =
    spair->span_history->span_data[2];
Scheduler_SpanData_get_curr(
  span_data, spair->span_seed_cache,
  cell->query_pos, row->target_pos,
  spair->straceback);
if(span_data->curr_span_seed
&& (cell->score[12][0]
   < span_data->curr_span_seed->score)){
cell->score[12][0] = span_data->curr_span_seed->score;
cell->score[12][1] = span_data->curr_span_seed->max;
cell->score[12][2] = span_data->curr_span_seed->seed_id;
cell->traceback[12] = Scheduler_Cell_add_span(
    span_data->curr_span_seed->cell,
    spair->straceback,
    spair->scheduler->span_map[12],
    src_query_pos
    -span_data->curr_span_seed->query_entry,
    src_target_pos
    -span_data->curr_span_seed->target_entry);
cell->score[12][3] = span_data->curr_span_seed->shadow_data[0];
}
}
shadow = transition->dst_shadow_list->pdata[0];
shadow->end_func(cell->score[12][3],
    dst_query_pos, dst_target_pos,
    spair->user_data);
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[12][0];
max_score = cell->score[12][1];
seed_id   = cell->score[12][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_10;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_10;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[9][0])
goto end_of_transition_10;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 12,
    dst_cell, 9,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_10:
transition = spair->scheduler->model->transition_list->pdata[9];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_9;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[6][0];
max_score = cell->score[6][1];
seed_id   = cell->score[6][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_9;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_9;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[11][0])
goto end_of_transition_9;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 6,
    dst_cell, 11,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_9:
span_data = spair->span_history->span_data[1];
span_seed.score = cell->score[11][0];
if(span_seed.score >= 0){
span_seed.max = cell->score[11][1];
span_seed.seed_id = cell->score[11][2];
span_seed.cell = cell->traceback[11];
span_seed.query_entry = src_query_pos;
span_seed.target_entry = src_target_pos;
span_seed.shadow_data = &cell->score[11][3];
Scheduler_SpanData_submit(span_data,
    &span_seed, spair->span_seed_cache, spair);
}transition = spair->scheduler->model->transition_list->pdata[7];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_7;
if(cell->permit_span_thaw){
span_data =
    spair->span_history->span_data[1];
Scheduler_SpanData_get_curr(
  span_data, spair->span_seed_cache,
  cell->query_pos, row->target_pos,
  spair->straceback);
if(span_data->curr_span_seed
&& (cell->score[11][0]
   < span_data->curr_span_seed->score)){
cell->score[11][0] = span_data->curr_span_seed->score;
cell->score[11][1] = span_data->curr_span_seed->max;
cell->score[11][2] = span_data->curr_span_seed->seed_id;
cell->traceback[11] = Scheduler_Cell_add_span(
    span_data->curr_span_seed->cell,
    spair->straceback,
    spair->scheduler->span_map[11],
    src_query_pos
    -span_data->curr_span_seed->query_entry,
    src_target_pos
    -span_data->curr_span_seed->target_entry);
cell->score[11][3] = span_data->curr_span_seed->shadow_data[0];
}
}
shadow = transition->dst_shadow_list->pdata[0];
shadow->end_func(cell->score[11][3],
    dst_query_pos, dst_target_pos,
    spair->user_data);
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[11][0];
max_score = cell->score[11][1];
seed_id   = cell->score[11][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_7;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_7;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[7][0])
goto end_of_transition_7;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 11,
    dst_cell, 7,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_7:
transition = spair->scheduler->model->transition_list->pdata[6];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_6;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_6;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_6;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[10][0])
goto end_of_transition_6;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 10,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_6:
span_data = spair->span_history->span_data[0];
span_seed.score = cell->score[10][0];
if(span_seed.score >= 0){
span_seed.max = cell->score[10][1];
span_seed.seed_id = cell->score[10][2];
span_seed.cell = cell->traceback[10];
span_seed.query_entry = src_query_pos;
span_seed.target_entry = src_target_pos;
span_seed.shadow_data = &cell->score[10][3];
Scheduler_SpanData_submit(span_data,
    &span_seed, spair->span_seed_cache, spair);
}transition = spair->scheduler->model->transition_list->pdata[4];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_4;
if(cell->permit_span_thaw){
span_data =
    spair->span_history->span_data[0];
Scheduler_SpanData_get_curr(
  span_data, spair->span_seed_cache,
  cell->query_pos, row->target_pos,
  spair->straceback);
if(span_data->curr_span_seed
&& (cell->score[10][0]
   < span_data->curr_span_seed->score)){
cell->score[10][0] = span_data->curr_span_seed->score;
cell->score[10][1] = span_data->curr_span_seed->max;
cell->score[10][2] = span_data->curr_span_seed->seed_id;
cell->traceback[10] = Scheduler_Cell_add_span(
    span_data->curr_span_seed->cell,
    spair->straceback,
    spair->scheduler->span_map[10],
    src_query_pos
    -span_data->curr_span_seed->query_entry,
    src_target_pos
    -span_data->curr_span_seed->target_entry);
cell->score[10][3] = span_data->curr_span_seed->shadow_data[0];
}
}
shadow = transition->dst_shadow_list->pdata[0];
shadow->end_func(cell->score[10][3],
    dst_query_pos, dst_target_pos,
    spair->user_data);
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[10][0];
max_score = cell->score[10][1];
seed_id   = cell->score[10][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_4;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_4;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_4;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 10,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_4:
transition = spair->scheduler->model->transition_list->pdata[3];
dst_query_pos = src_query_pos + 1;
dst_target_pos = src_target_pos + 1;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_3;
shadow = transition->dst_shadow_list->pdata[0];
shadow->end_func(cell->score[9][3],
    dst_query_pos, dst_target_pos,
    spair->user_data);
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[9][0];
max_score = cell->score[9][1];
seed_id   = cell->score[9][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_3;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_3;
dst_row = Lookahead_get(spair->row_index, 1);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 1, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 1);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_3;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 1, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 9,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_3:
transition = spair->scheduler->model->transition_list->pdata[2];
dst_query_pos = src_query_pos + 1;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_2;
shadow = transition->dst_shadow_list->pdata[0];
shadow->end_func(cell->score[7][3],
    dst_query_pos, dst_target_pos,
    spair->user_data);
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[7][0];
max_score = cell->score[7][1];
seed_id   = cell->score[7][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_2;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_2;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 1);
if(dst_cell){
if(dst_score <= dst_cell->score[2][0])
goto end_of_transition_2;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 1, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 7,
    dst_cell, 2,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_2:
transition = spair->scheduler->model->transition_list->pdata[1];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 2;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_1;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_1;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_1;
dst_row = Lookahead_get(spair->row_index, 2);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 2, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[8][0])
goto end_of_transition_1;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 8,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_1:
transition = spair->scheduler->model->transition_list->pdata[0];
dst_query_pos = src_query_pos + 0;
dst_target_pos = src_target_pos + 1;
if((dst_query_pos > Region_query_end(spair->region))
|| (dst_target_pos > Region_target_end(spair->region)))
goto end_of_transition_0;
transition_score = C4_Calc_score(transition->calc,
   src_query_pos, src_target_pos,
   spair->user_data);
src_score = cell->score[2][0];
max_score = cell->score[2][1];
seed_id   = cell->score[2][2];
dst_score = src_score + transition_score;
if(dst_score < 0)
goto end_of_transition_0;
if((max_score - dst_score)    > spair->scheduler->dropoff)
goto end_of_transition_0;
dst_row = Lookahead_get(spair->row_index, 1);
if(!dst_row){
dst_row = Scheduler_Row_create(dst_target_pos, spair);
Lookahead_set(spair->row_index, 1, dst_row);
Lookahead_move(dst_row->cell_index, cell->query_pos);
}
dst_cell = Lookahead_get(dst_row->cell_index, 0);
if(dst_cell){
if(dst_score <= dst_cell->score[6][0])
goto end_of_transition_0;
} else {
dst_cell = Scheduler_Cell_create(dst_query_pos, FALSE, spair);
Lookahead_set(dst_row->cell_index, 0, dst_cell);
}
Scheduler_Cell_assign(spair,
    cell, 2,
    dst_cell, 6,
    dst_score, max_score,
    transition, seed_id,
    dst_query_pos, dst_target_pos);
end_of_transition_0:
return;
}

/* ---< END >--- */

