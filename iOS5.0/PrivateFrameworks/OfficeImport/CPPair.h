/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CPPair : NSObject
{
    NSObject *m_first;
    BOOL m_firstIsWrapped;
    NSObject *m_second;
    BOOL m_secondIsWrapped;
}

+ (id)pairWithFirst:(id)arg1 andSecond:(id)arg2;
+ (id)pairWithFirstPointer:(id)arg1 andSecond:(id)arg2;
+ (id)pairWithFirst:(id)arg1 andSecondPointer:(id)arg2;
+ (id)pairWithFirstPointer:(id)arg1 andSecondPointer:(id)arg2;
- (id)initWithFirst:(id)arg1 andSecond:(id)arg2;
- (id)initWithFirstPointer:(id)arg1 andSecond:(id)arg2;
- (id)initWithFirst:(id)arg1 andSecondPointer:(id)arg2;
- (id)initWithFirstPointer:(id)arg1 andSecondPointer:(id)arg2;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)first;
- (id)second;
- (id)description;

@end

