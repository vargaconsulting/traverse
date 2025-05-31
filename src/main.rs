use std::error::Error;
use bluer::Session;

#[tokio::main]
async fn main() -> Result<(), Box<dyn Error>> {
    let session = Session::new().await?;
    let adapter = session.default_adapter().await?;
    println!("Using adapter: {}", adapter.name());

    adapter.set_powered(true).await?;

    println!("Adapter is powered: {}", adapter.is_powered().await?);
    Ok(())
}

