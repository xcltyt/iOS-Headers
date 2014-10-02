//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@class NSString;

@interface TRKeyboardPromptUpdatePacketEvent : TRPacketEvent
{
    BOOL _secureText;
    int _keyboardType;
    NSString *_subtitle;
    NSString *_text;
    NSString *_title;
    int _updateType;
    unsigned long long _sessionID;
}

+ (unsigned int)_packetEventType;
@property(readonly, nonatomic) int updateType; // @synthesize updateType=_updateType;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic, getter=isSecureText) BOOL secureText; // @synthesize secureText=_secureText;
@property(readonly, nonatomic) int keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithKeyboardType:(int)arg1 secureText:(BOOL)arg2 sessionID:(unsigned long long)arg3 subtitle:(id)arg4 text:(id)arg5 title:(id)arg6 updateType:(int)arg7;

@end
