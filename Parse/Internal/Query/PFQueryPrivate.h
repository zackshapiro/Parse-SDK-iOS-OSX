/**
 * Copyright (c) 2015-present, Parse, LLC.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <Foundation/Foundation.h>

#import <Parse/PFQuery.h>

#import "PFQueryState.h"

#ifdef __cplusplus
#define PARSE_EXTERN extern "C"
#else
#define PARSE_EXTERN extern
#endif

PARSE_EXTERN NSString *const PFQueryKeyNotEqualTo;
PARSE_EXTERN NSString *const PFQueryKeyLessThan;
PARSE_EXTERN NSString *const PFQueryKeyLessThanEqualTo;
PARSE_EXTERN NSString *const PFQueryKeyGreaterThan;
PARSE_EXTERN NSString *const PFQueryKeyGreaterThanOrEqualTo;
PARSE_EXTERN NSString *const PFQueryKeyContainedIn;
PARSE_EXTERN NSString *const PFQueryKeyNotContainedIn;
PARSE_EXTERN NSString *const PFQueryKeyContainsAll;
PARSE_EXTERN NSString *const PFQueryKeyNearSphere;
PARSE_EXTERN NSString *const PFQueryKeyWithin;
PARSE_EXTERN NSString *const PFQueryKeyRegex;
PARSE_EXTERN NSString *const PFQueryKeyExists;
PARSE_EXTERN NSString *const PFQueryKeyInQuery;
PARSE_EXTERN NSString *const PFQueryKeyNotInQuery;
PARSE_EXTERN NSString *const PFQueryKeySelect;
PARSE_EXTERN NSString *const PFQueryKeyDontSelect;
PARSE_EXTERN NSString *const PFQueryKeyRelatedTo;
PARSE_EXTERN NSString *const PFQueryKeyOr;
PARSE_EXTERN NSString *const PFQueryKeyQuery;
PARSE_EXTERN NSString *const PFQueryKeyKey;
PARSE_EXTERN NSString *const PFQueryKeyObject;

PARSE_EXTERN NSString *const PFQueryOptionKeyMaxDistance;
PARSE_EXTERN NSString *const PFQueryOptionKeyBox;
PARSE_EXTERN NSString *const PFQueryOptionKeyRegexOptions;

#undef PARSE_EXTERN

@class BFTask PF_GENERIC(__covariant BFGenericType);
@class PFObject;

@interface PFQuery ()

@property (nonatomic, strong, readonly) PFQueryState *state;

@end

@interface PFQuery (Private)

- (instancetype)whereRelatedToObject:(PFObject *)parent fromKey:(NSString *)key;
- (void)redirectClassNameForKey:(NSString *)key;

@end
