/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStream : PBCodable <NSCopying> {
    AWDHomeKitCameraStreamMessaging * _controllerMessaging;
    unsigned long long  _duration;
    unsigned int  _errorCode;
    struct { 
        unsigned int duration : 1; 
        unsigned int receivedFirstFrame : 1; 
        unsigned int startupDelay : 1; 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int resolutionOnClose : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int isLocal : 1; 
        unsigned int isStreamStarted : 1; 
    }  _has;
    AWDHomeKitCameraIDSSessionSetup * _idsSessionSetup;
    AWDHomeKitCameraStreamConfigure * _initialConfiguration;
    BOOL  _isLocal;
    BOOL  _isStreamStarted;
    AWDHomeKitCameraStreamIDSConnSetup * _phoneIDSConnectionSetup;
    unsigned long long  _receivedFirstFrame;
    NSMutableArray * _reconfigurations;
    AWDHomeKitCameraStreamMessaging * _residentMessaging;
    NSMutableArray * _resolutionCounts;
    int  _resolutionOnClose;
    NSString * _sessionID;
    unsigned long long  _startupDelay;
    unsigned long long  _timestamp;
    unsigned int  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
    AWDHomeKitVendorInformation * _vendorDetails;
    AWDHomeKitCameraStreamIDSConnSetup * _watchIDSConnectionSetup;
    AWDHomeKitCameraStreamMessaging * _watchMessaging;
}

@property (nonatomic, retain) AWDHomeKitCameraStreamMessaging *controllerMessaging;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, readonly) BOOL hasControllerMessaging;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasIdsSessionSetup;
@property (nonatomic, readonly) BOOL hasInitialConfiguration;
@property (nonatomic) BOOL hasIsLocal;
@property (nonatomic) BOOL hasIsStreamStarted;
@property (nonatomic, readonly) BOOL hasPhoneIDSConnectionSetup;
@property (nonatomic) BOOL hasReceivedFirstFrame;
@property (nonatomic, readonly) BOOL hasResidentMessaging;
@property (nonatomic) BOOL hasResolutionOnClose;
@property (nonatomic, readonly) BOOL hasSessionID;
@property (nonatomic) BOOL hasStartupDelay;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic, readonly) BOOL hasUnderlyingErrorDomain;
@property (nonatomic, readonly) BOOL hasVendorDetails;
@property (nonatomic, readonly) BOOL hasWatchIDSConnectionSetup;
@property (nonatomic, readonly) BOOL hasWatchMessaging;
@property (nonatomic, retain) AWDHomeKitCameraIDSSessionSetup *idsSessionSetup;
@property (nonatomic, retain) AWDHomeKitCameraStreamConfigure *initialConfiguration;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isStreamStarted;
@property (nonatomic, retain) AWDHomeKitCameraStreamIDSConnSetup *phoneIDSConnectionSetup;
@property (nonatomic) unsigned long long receivedFirstFrame;
@property (nonatomic, retain) NSMutableArray *reconfigurations;
@property (nonatomic, retain) AWDHomeKitCameraStreamMessaging *residentMessaging;
@property (nonatomic, retain) NSMutableArray *resolutionCounts;
@property (nonatomic) int resolutionOnClose;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long startupDelay;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDomain;
@property (nonatomic, retain) AWDHomeKitVendorInformation *vendorDetails;
@property (nonatomic, retain) AWDHomeKitCameraStreamIDSConnSetup *watchIDSConnectionSetup;
@property (nonatomic, retain) AWDHomeKitCameraStreamMessaging *watchMessaging;

+ (Class)reconfigurationsType;
+ (Class)resolutionCountType;

- (void).cxx_destruct;
- (int)StringAsResolutionOnClose:(id)arg1;
- (void)addReconfigurations:(id)arg1;
- (void)addResolutionCount:(id)arg1;
- (void)clearReconfigurations;
- (void)clearResolutionCounts;
- (id)controllerMessaging;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned int)errorCode;
- (BOOL)hasControllerMessaging;
- (BOOL)hasDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasIdsSessionSetup;
- (BOOL)hasInitialConfiguration;
- (BOOL)hasIsLocal;
- (BOOL)hasIsStreamStarted;
- (BOOL)hasPhoneIDSConnectionSetup;
- (BOOL)hasReceivedFirstFrame;
- (BOOL)hasResidentMessaging;
- (BOOL)hasResolutionOnClose;
- (BOOL)hasSessionID;
- (BOOL)hasStartupDelay;
- (BOOL)hasTimestamp;
- (BOOL)hasUnderlyingErrorCode;
- (BOOL)hasUnderlyingErrorDomain;
- (BOOL)hasVendorDetails;
- (BOOL)hasWatchIDSConnectionSetup;
- (BOOL)hasWatchMessaging;
- (unsigned int)hash;
- (id)idsSessionSetup;
- (id)initialConfiguration;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocal;
- (BOOL)isStreamStarted;
- (void)mergeFrom:(id)arg1;
- (id)phoneIDSConnectionSetup;
- (BOOL)readFrom:(id)arg1;
- (unsigned long long)receivedFirstFrame;
- (id)reconfigurations;
- (id)reconfigurationsAtIndex:(unsigned int)arg1;
- (unsigned int)reconfigurationsCount;
- (id)residentMessaging;
- (id)resolutionCountAtIndex:(unsigned int)arg1;
- (id)resolutionCounts;
- (unsigned int)resolutionCountsCount;
- (int)resolutionOnClose;
- (id)resolutionOnCloseAsString:(int)arg1;
- (id)sessionID;
- (void)setControllerMessaging:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasIsLocal:(BOOL)arg1;
- (void)setHasIsStreamStarted:(BOOL)arg1;
- (void)setHasReceivedFirstFrame:(BOOL)arg1;
- (void)setHasResolutionOnClose:(BOOL)arg1;
- (void)setHasStartupDelay:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasUnderlyingErrorCode:(BOOL)arg1;
- (void)setIdsSessionSetup:(id)arg1;
- (void)setInitialConfiguration:(id)arg1;
- (void)setIsLocal:(BOOL)arg1;
- (void)setIsStreamStarted:(BOOL)arg1;
- (void)setPhoneIDSConnectionSetup:(id)arg1;
- (void)setReceivedFirstFrame:(unsigned long long)arg1;
- (void)setReconfigurations:(id)arg1;
- (void)setResidentMessaging:(id)arg1;
- (void)setResolutionCounts:(id)arg1;
- (void)setResolutionOnClose:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStartupDelay:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingErrorCode:(unsigned int)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (void)setVendorDetails:(id)arg1;
- (void)setWatchIDSConnectionSetup:(id)arg1;
- (void)setWatchMessaging:(id)arg1;
- (unsigned long long)startupDelay;
- (unsigned long long)timestamp;
- (unsigned int)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (id)vendorDetails;
- (id)watchIDSConnectionSetup;
- (id)watchMessaging;
- (void)writeTo:(id)arg1;

@end
