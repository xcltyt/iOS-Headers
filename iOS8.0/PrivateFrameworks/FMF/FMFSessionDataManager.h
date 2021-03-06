//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

__attribute__((visibility("hidden")))
@interface FMFSessionDataManager : NSObject
{
    NSSet *_followers;
    NSSet *_following;
    NSSet *_locations;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSSet *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSSet *following; // @synthesize following=_following;
@property(retain, nonatomic) NSSet *followers; // @synthesize followers=_followers;
- (void).cxx_destruct;
- (void *)_loadAddressBook;
- (void)_registerABCallbacks;
- (void)abChanged:(id)arg1;
- (id)offerExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (id)locationForHandle:(id)arg1;
- (id)followingForHandle:(id)arg1;
- (id)followerForHandle:(id)arg1;

@end

