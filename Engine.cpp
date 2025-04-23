void Engine()
{
    switch (choice) {
        case 1:
            StartGeometryGame();
            break;
        case 2:
            StartLcmGame();
            break;
        case 0:
            std::cout << "Exiting program.\n";
            return 0;
        default:
            std::cout << "Invalid choice. Please select again.\n";
            break;
    }
}