/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSFastEnumeration-Protocol.h"

@class CKService, CKSubConversation, NSCalendarDate, NSNumber, NSString;

@interface CKMessage : NSObject <NSFastEnumeration>
{
    unsigned int _height;
    float _cachedPercentComplete;
    unsigned int _dateLoaded:1;
    unsigned int _heightAndFlagsLoaded:1;
    unsigned int _failedSendCountLoaded:1;
    unsigned int _outgoing:1;
    unsigned int _outgoingLoaded:1;
    unsigned int _hasLoadedIsFromDowngrading:1;
    unsigned int _hasLoadedIsRead:1;
    unsigned int _isFromDowngrading:1;
    unsigned int _isRead:1;
    CKService *_service;
    NSString *_groupID;
    double _date;
    NSCalendarDate *_calendarDate;
    int _failedSendCount;
    unsigned int _flags;
    NSString *_text;
    CKSubConversation *_conversation;
}

- (id)initWithService:(id)arg1;
@property(readonly, nonatomic) NSString *guid;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
- (int)messageCount;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)_resetData;
- (void)resetHeightAndFlags;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(readonly, nonatomic) int rowID;
- (double)_loadDate;
- (double)timeIntervalSince1970;
- (id)date;
- (void)markAsRead;
- (BOOL)isForward;
- (BOOL)_loadOutgoing;
- (void)loadParts;
- (id)parts;
- (unsigned int)messagePartCount;
- (BOOL)hasAttachments;
- (id)messagePartAtIndex:(unsigned int)arg1;
- (id)messagePartWithRowID:(int)arg1;
- (void)_loadText;
- (BOOL)isOutgoing;
- (id)previewText;
- (id)attachmentText:(BOOL)arg1;
- (id)subject;
- (id)text;
- (id)error;
- (unsigned long)height;
- (void)_storeUIFlags:(unsigned long)arg1;
- (void)_loadUIFlags;
- (BOOL)storesFlagsInDatabase;
- (void)setUIHeight:(unsigned long)arg1 flags:(unsigned long)arg2;
- (void)getUIHeight:(unsigned int *)arg1 flags:(unsigned int *)arg2;
- (int)totalMessageCount;
- (int)pendingCount;
- (BOOL)pending;
- (int)compare:(id)arg1;
- (BOOL)failedSend;
- (BOOL)partiallyFailedSend;
- (BOOL)isDelivered;
- (BOOL)isWaitingForDelivery;
- (id)timeDelivered;
- (BOOL)_loadIsFromDowngrading;
@property(nonatomic) BOOL isFromDowngrading;
- (BOOL)_loadIsRead;
- (BOOL)isRead;
- (BOOL)isFromMe;
- (int)sentCount;
- (BOOL)hasBeenSent;
- (id)timeRead;
- (BOOL)isPlaceholder;
- (BOOL)isTypingIndicator;
- (void)_loadFailedSendCount;
- (int)failedSendCount;
- (BOOL)completelyFailedSend;
- (void)reloadFailedSendCount;
- (float)percentComplete;
- (id)sender;
- (id)address;
- (id)alertImageData;
- (BOOL)isFirstDisplayablePart:(id)arg1;
- (BOOL)isOnlyDisplayableMessagePart:(id)arg1;
- (void)deleteMessagePart:(id)arg1;
- (BOOL)smartForwardCapable;
- (BOOL)getCharacterCountNumerator:(unsigned int *)arg1 denominator:(unsigned int *)arg2;
- (void)send;
- (void)cancel;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (BOOL)wantsSendStatus;
@property(readonly, nonatomic) CKService *service; // @synthesize service=_service;
@property(nonatomic) CKSubConversation *conversation; // @synthesize conversation=_conversation;

@end

