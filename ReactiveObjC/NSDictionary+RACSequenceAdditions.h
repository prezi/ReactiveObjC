//
//  NSDictionary+RACSequenceAdditions.h
//  ReactiveObjC
//
//  Created by Justin Spahr-Summers on 2012-10-29.
//  Copyright (c) 2012 GitHub. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RACSequence;
@class RACTwoTuple;

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (RACSequenceAdditions)

/// Creates and returns a sequence of key/value tuples.
///
/// Mutating the receiver will not affect the sequence after it's been created.
@property (nonatomic, copy, readonly) RACSequence *rac_sequence;

/// Creates and returns a sequence corresponding to the keys in the receiver.
///
/// Mutating the receiver will not affect the sequence after it's been created.
@property (nonatomic, copy, readonly) RACSequence *rac_keySequence;

/// Creates and returns a sequence corresponding to the values in the receiver.
///
/// Mutating the receiver will not affect the sequence after it's been created.
@property (nonatomic, copy, readonly) RACSequence *rac_valueSequence;

@end

NS_ASSUME_NONNULL_END
