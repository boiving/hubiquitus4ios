/*
 * Copyright (c) Novedia Group 2012.
 *
 *     This file is part of Hubiquitus.
 *
 *     Hubiquitus is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     Hubiquitus is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Hubiquitus.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <Foundation/Foundation.h>
#import "Priority.h"
#import "HLocation.h"

@interface HMessageOptions : NSObject
@property (nonatomic, strong) NSString * ref;
@property (nonatomic, strong) NSString * convid;
@property (nonatomic) Priority priority;
@property (nonatomic, strong) NSDate * relevance;
@property (nonatomic) long relevanceOffset;
@property (nonatomic) BOOL persistent;
@property (nonatomic, strong) HLocation * location;
@property (nonatomic, strong) NSString * author;
@property (nonatomic, strong) NSDictionary * headers;
@property (nonatomic, strong) NSDate * published;
@property (nonatomic) long timeout;

@end