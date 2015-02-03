//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Nick on 2/2/15.
//  Copyright (c) 2015 Nick. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
