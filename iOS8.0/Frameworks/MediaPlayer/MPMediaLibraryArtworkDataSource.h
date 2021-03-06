//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPArtworkDataSource.h"

@class MPArtworkResizeUtility, NSCache, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource>
{
    NSCache *_fallbackCache;
    MPArtworkResizeUtility *_artworkResizeUtility;
}

@property(retain, nonatomic) MPArtworkResizeUtility *artworkResizeUtility; // @synthesize artworkResizeUtility=_artworkResizeUtility;
@property(retain, nonatomic) NSCache *fallbackCache; // @synthesize fallbackCache=_fallbackCache;
- (void).cxx_destruct;
- (id)_resizeArtwork:(id)arg1 toSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_representationAtSize:(struct CGSize)arg1 forCatalog:(id)arg2;
- (BOOL)_isRepresentationSize:(struct CGSize)arg1 validForFittingSize:(struct CGSize)arg2;
- (BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (struct CGSize)_bestSizeForArtworkCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (BOOL)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

