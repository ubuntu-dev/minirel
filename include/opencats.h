/*
 * opencats.h
 *
 *  Created on: 31-Oct-2014
 *      Author: Dheeraj
 */

#ifndef OPENCATS_H_
#define OPENCATS_H_

#include "globals.h"
#include "defs.h"
#include "cache.h"
#include "buffer.h"
#include "globals.h"
#include "readpage.h"
#include "helpers.h"
#include "findrec.h"

struct attrCatalog* create_attr_cat_attrcat();
struct attrCatalog* create_attr_cat_relcat();

int OpenCats();

#endif