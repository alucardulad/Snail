//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface SettingsModel : NSObject
{
    BOOL _bypassSystem;
    NSDictionary *_localDNSMap;
    NSString *_interface;
    int _port;
    NSString *_loglevel;
    NSString *_skipProxy;
    NSString *_bypassTUN;
    NSString *_DNSServer;
}

+ (id)parseHostLine:(id)arg1 hostMap:(id)arg2;
+ (id)invalidLineErrorWithLineContent:(id)arg1;
+ (id)parseStringIntoSectionLineArray:(id)arg1 generalLines:(id)arg2 hostLines:(id)arg3;
+ (id)settingsModelWithString:(id)arg1 error:(id *)arg2;
+ (id)settingsModelFromPath:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *DNSServer; // @synthesize DNSServer=_DNSServer;
@property(retain, nonatomic) NSString *bypassTUN; // @synthesize bypassTUN=_bypassTUN;
@property(retain, nonatomic) NSString *skipProxy; // @synthesize skipProxy=_skipProxy;
@property(nonatomic) BOOL bypassSystem; // @synthesize bypassSystem=_bypassSystem;
@property(retain, nonatomic) NSString *loglevel; // @synthesize loglevel=_loglevel;
@property(nonatomic) int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *interface; // @synthesize interface=_interface;
@property(retain, nonatomic) NSDictionary *localDNSMap; // @synthesize localDNSMap=_localDNSMap;
- (void).cxx_destruct;
- (id)DNSServerAddresses;
- (BOOL)verifyDNSServerPropertyValue;
- (id)stringRepresentation;
- (BOOL)saveModelToPath:(id)arg1 error:(id *)arg2;
- (id)parseGeneralLine:(id)arg1;
- (id)init;

@end
