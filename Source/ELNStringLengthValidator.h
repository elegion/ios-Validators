//
//  ELNStringLengthValidator.h
//  e-legion
//
//  Created by Dmitry Nesterenko on 26.11.15.
//  Copyright © 2015 e-legion. All rights reserved.
//

#import "ELNValidatorType.h"

typedef NS_ENUM(NSInteger, ELNStringLengthValidatorError) {
    ELNStringLengthValidatorErrorInvalidType = 1,
    ELNStringLengthValidatorErrorMinimumValueInsufficient,
    ELNStringLengthValidatorErrorMaximumValueExceeded
};

extern NSString * const ELNStringLengthValidatorErrorDomain;

@interface ELNStringLengthValidator : NSObject <ELNValidatorType>

/// Default value is 0
@property (nonatomic, assign) NSUInteger minLength;

/// Default value is 0
@property (nonatomic, assign) NSUInteger maxLength;

- (instancetype)initWithMinLength:(NSUInteger)minLength maxLength:(NSUInteger)maxLength;

@end
