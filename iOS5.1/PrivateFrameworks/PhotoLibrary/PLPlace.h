/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetContainer-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, PLPlacesMapAnnotation, UIImage;

@interface PLPlace : NSObject <PLAssetContainer>
{
    PLPlacesMapAnnotation *_annotation;
    BOOL _titleIsNumberOfPhotos;
    NSMutableArray *_photos;
    BOOL _needsToUpdateAlbumPhotos;
    unsigned int numberOfPhotos;
    unsigned int numberOfVideos;
    NSSet *assetsSet;
    NSDictionary *slideshowSettings;
    CDStruct_feeb6407 region;
    NSString *_uuid;
    NSMutableOrderedSet *_assets;
    CDStruct_feeb6407 originalRegion;
    CDStruct_feeb6407 destinationRegion;
}

@property(nonatomic) CDStruct_feeb6407 destinationRegion; // @synthesize destinationRegion;
@property(nonatomic) CDStruct_feeb6407 originalRegion; // @synthesize originalRegion;
@property(retain, nonatomic) NSMutableOrderedSet *_assets; // @synthesize _assets;
@property(copy, nonatomic) NSString *_uuid; // @synthesize _uuid;
@property(nonatomic) CDStruct_feeb6407 region; // @synthesize region;
@property(retain, nonatomic) NSDictionary *slideshowSettings; // @synthesize slideshowSettings;
@property(retain, nonatomic) NSSet *assetsSet; // @synthesize assetsSet;
@property(nonatomic) unsigned int numberOfVideos; // @synthesize numberOfVideos;
@property(nonatomic) unsigned int numberOfPhotos; // @synthesize numberOfPhotos;
- (void)_updateAnnotationTitle;
- (id)_annotationTitle;
- (CDStruct_c3b9c2ee)_placeLocation;
- (BOOL)hasSameEffectiveLocationAs:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)effectiveLocation;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPlace:(id)arg1;
- (id)annotation;
- (void)setTitleIsNumberOfPhotos:(BOOL)arg1;
- (BOOL)shouldGroupPhoto:(id)arg1;
- (BOOL)hasPhoto:(id)arg1;
- (void)removePhoto:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)batchFetchAssets:(id)arg1;
- (id)displayableIndexesForCount:(unsigned int)arg1;
@property(readonly, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
- (BOOL)canPerformEditOperation:(int)arg1;
@property(readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property(readonly, nonatomic) BOOL isCameraAlbum;
@property(readonly, nonatomic) BOOL isLibrary;
- (unsigned int)indexOfPosterImage;
@property(readonly, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *name;
- (void)updateStackedImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
@property(nonatomic) unsigned int pendingItemsType;
@property(nonatomic) unsigned int pendingItemsCount;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) BOOL isEmpty;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, nonatomic) NSMutableOrderedSet *mutableAssets;
- (void)setAssets:(id)arg1;
@property(readonly, nonatomic) NSOrderedSet *assets;
@property(readonly, nonatomic) int kindValue;
@property(readonly, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *uuid;
- (void)dealloc;
- (id)initWithRegion:(CDStruct_feeb6407)arg1;

@end

