//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AppletTranslator : NSObject
{
}

+ (struct os_state_data_s *)dumpState;
+ (id)checkSEExpressAppletCompatibility:(id)arg1 error:(id *)arg2;
+ (BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(char *)arg3 skipAllActivations:(BOOL)arg4 error:(id *)arg5;
+ (BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 error:(id *)arg3;
+ (BOOL)setPlasticCardMode:(BOOL)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 serialNumber:(id)arg5 transceiver:(id)arg6 error:(id *)arg7;
+ (BOOL)appletCacheUpdated:(id)arg1 serialNumber:(id)arg2 isdSequenceCounter:(id)arg3 transceiver:(id)arg4 error:(id *)arg5;
+ (id)getAppletStateAndHistory:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id *)arg5;
+ (id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id *)arg6;
+ (void)initLibrary:(CDUnknownBlockType)arg1;

@end

