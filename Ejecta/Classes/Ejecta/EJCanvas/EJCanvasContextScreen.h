#import "EJCanvasContext.h"
#import "EAGLView.h"

typedef enum {
	kEJScalingModeNone,
	kEJScalingModeFitWidth,
	kEJScalingModeFitHeight
} EJScalingMode;

@interface EJCanvasContextScreen : EJCanvasContext {
	EAGLView * glview;
	GLuint colorRenderbuffer;
	
	BOOL useRetinaResolution;
	UIDeviceOrientation orientation;
	EJScalingMode scalingMode;
	float backingStoreRatio;
}

- (void)present;
- (void)resetGLContext;

@property (nonatomic) BOOL useRetinaResolution;
@property (nonatomic) EJScalingMode scalingMode;

@end
