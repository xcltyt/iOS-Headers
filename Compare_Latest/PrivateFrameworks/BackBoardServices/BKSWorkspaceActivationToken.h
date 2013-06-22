/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BKSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate;

@interface BKSWorkspaceActivationToken : NSObject <NSCopying, BKSXPCCoding>
{
    NSDate *_timestamp;
}

+ (id)token;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortDescription;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end
