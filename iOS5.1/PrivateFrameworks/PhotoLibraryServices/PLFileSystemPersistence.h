/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface PLFileSystemPersistence : NSObject
{
    struct dispatch_queue_s *_isolation;
    struct dispatch_queue_s *_writerQueue;
    NSMutableArray *_workItems;
}

+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 completion:(id)arg4;
+ (void)persistMetadata:(id)arg1 fileURL:(id)arg2;
+ (void)persistString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUInt16:(unsigned short)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (void)persistUUIDString:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3;
+ (id)persistedAttributesForFileAtURL:(id)arg1;
+ (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 completion:(id)arg4;
+ (id)sharedInstance;
- (void)backgroundWriteData:(id)arg1 toFileAtURL:(id)arg2;
- (void)persistForTime:(double)arg1;
- (void)persistData:(id)arg1 forKey:(id)arg2 fileURL:(id)arg3 completion:(id)arg4;
- (void)dealloc;
- (id)init;

@end

